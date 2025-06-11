#include "pokemon.hpp"
#include <iostream>

int main(){
    Pokemon* P1[3];
    Pokemon* P2[3];

    // P1[0] = new Pokemon("Charmander", 100, 30, 10);
    // P2[0] = new Pokemon("Squirtle", 100, 20, 15);


    // P2[0]->ataque(P1[0], P2[0]->attack, P2[0]);
    P1[0] = P1[0]->escolherPokemon(P1[0]);
    
    cout << endl << P1[0]->nome;
}