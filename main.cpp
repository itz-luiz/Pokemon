#include "pokemon.hpp"
#include <iostream>

int main(){
    Pokemon *P1[_numPokemon];
    Pokemon *P2[_numPokemon];

    // Escolha de Pokémons

    // Jogador 1
    cout << endl << "Escolha de Pokemons do jogador 1" << endl;
    for (int i = 0; i < _numPokemon; i++){
        cout << endl << "Pokemon " << i + 1;
        P1[i] = P1[i]->escolherPokemon(P1[i]);
    }

    // Jogador 2
    cout << endl << "Escolha de Pokemons do jogador 2" << endl;
    for (int i = 0; i < _numPokemon; i++){
        cout << endl << "Pokemon " << i + 1;
        P2[i] = P2[i]->escolherPokemon(P2[i]);
    }
    
    // P2[0]->ataque(P1[0], P2[0]->attack, P2[0]);
    // cout << endl << P1[0]->nome;
}