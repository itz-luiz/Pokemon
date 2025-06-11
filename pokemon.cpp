#include "pokemon.hpp"
#include <iostream>
#include <cmath>
using namespace std;

void Pokemon::ataque(Pokemon* pokemon, int attack, Pokemon* pokemon2){
    float defesa = 1 - (pokemon->defense / 100); // Calcula a quantidade (em %) de dano a ser anulado pela resistência
    int damage = round(attack * defesa);

    pokemon->HP -= damage;

    gameStatus(damage, pokemon, pokemon2);
}

void Pokemon::gameStatus(int damage, Pokemon* pokemon, Pokemon* pokemon2){
    cout << endl << pokemon2->nome << " atacou " << pokemon->nome << " causando " << damage << " de dano.";
    cout << endl << pokemon->nome << " esta com " << pokemon->HP << " de HP restante.";
    if(pokemon->HP <= 0){
        cout << endl << pokemon->nome << " foi derrotado!";
    }
}

Pokemon* Pokemon::escolherPokemon(Pokemon* pokemon){
    int escolha;

    cout << endl << "0 - Sair do jogo";
    cout << endl << "1 - Charmander";
    cout << endl << "2 - Squirtle";
    cout << endl << "3 - Bulbassaur";
    cout << endl << "4 - Pikachu";

    cout << endl << endl << "Sua escolha: ";
    cin >> escolha;

    switch(escolha){
        case 1: pokemon = new Pokemon("Charmander", 100, 30, 10);
        break;
        case 2: pokemon = new Pokemon("Squirtle", 100, 25, 15);
        break;
        case 3: pokemon = new Pokemon("Bulbassaur", 120, 20, 20);
        break;
        case 4: pokemon = new Pokemon("Pikachu", 90, 35, 10);
        break;
    }

    return pokemon;
}