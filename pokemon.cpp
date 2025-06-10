#include "pokemon.hpp"
#include <iostream>
#include <cmath>
using namespace std;

void Pokemon::ataque(Pokemon* pokemon, int attack, Pokemon* pokemon2)
{
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