#ifndef HERO_TYPE_H
#define HERO_TYPE_H

#include <string>

enum HeroType {
    GUERREIRO = 1,
    MAGO = 2,
    MONGE = 3,
    NINJA = 4
};

inline std::string returnType(HeroType type){
    switch(type){
        case GUERREIRO: return "Guerreiro";
        case MAGO: return "Mago";
        case MONGE: return "Monge";
        case NINJA: return "Ninja";
        default: return "Desconhecido";
    }
}

#endif