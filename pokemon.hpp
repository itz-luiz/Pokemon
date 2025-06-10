#include <iostream>
using namespace std;

class Pokemon
{
public:
    string nome;
    int HP;      // Pontos de vida do Pokémon
    int attack;  // Valor do dano
    float defense; // Valor de 0-100 (porcentagem de reducao do dano)
    // int speed;   // Decide quem ataca primeiro -> maior speed = ataca primeiro

    void ataque(Pokemon* pokemon, int ataque, Pokemon* pokemon2);
    void gameStatus(int damage, Pokemon* pokemon, Pokemon* pokemon2); // imprime "<nome> defendeu com Y de resistencia"

    Pokemon(){
        nome = "";
        HP = 0;
        attack = 0;
        defense = 0;
        // speed = 0;
    }
    Pokemon(string n, int hp, int a, float d){
        nome = n;
        HP = hp;
        attack = a;
        defense = d;
        // speed = s; 
    }
};