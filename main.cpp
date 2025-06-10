#include "pokemon.hpp"
#include <iostream>

int main()
{
    Pokemon* P1 = new Pokemon("Charmander", 20, 30, 10);
    Pokemon* P2 = new Pokemon("Squirtle", 100, 20, 15);

    P2->ataque(P1, P2->attack, P2);

}