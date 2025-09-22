#ifndef HERO_H
#define HERO_H
#include <string>

#include "heroType.h"

using namespace std;

class Hero {
    private:
        string name;
        int idade;
        HeroType heroType;

    public:
        Hero(string name, int idade, int tipo);
        void Presentation();
        string Attack();
};

#endif