#include <iostream>
#include <string>

#include "hero.h"

using namespace std;

Hero::Hero(string name, int idade, int tipo){
    this->name = name;
    this->idade = idade;

    if(tipo >= GUERREIRO && tipo <= NINJA)
        this->heroType = static_cast<HeroType>(tipo);
    else
        this->heroType = GUERREIRO;
}

void Hero::Presentation(){
    cout << "o " << this->heroType << " atacou " << Attack() << endl;
}

string Hero::Attack(){
    switch(this->heroType){
        case GUERREIRO:     return "usando espada!";
        case MAGO:          return "usando magia!";
        case MONGE:         return "usando golpe furioso!";
        case NINJA:         return "usando shuriken!";
        default: return " e errou!";
    };
}