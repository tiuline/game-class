#include <iostream>
#include <string>

#include "hero.h"

using namespace std;

int main() {
    string nome;
    int idade, tipo;
    cout << "Bem vindo a sua nova missão jovem aventureiro!!!" << endl;
    cout << "Insira aqui o seu nome: ";  cin >> nome;  
    cout << "Agora a sua idade: ";       cin >> idade;
    cout << "Por fim, digite o tipo de heroi que deseja" <<endl;
    cout << "[1-Guerreiro, 2-Mago, 3-Monge, 4-Ninja]: "; cin >> tipo;

    Hero hero(nome, idade, tipo);

    hero.Presentation();
    return 0;
}
