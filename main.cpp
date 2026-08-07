#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    Carro *cr = new Carro();

    // Definindo valores para os atributos
    cr->setCor("Vermelho");
    cr->setModelo("Uno");
    cr->setVelocidade(0);

    // Usando os métodos
    cr->acelerar();
    cout << "Cor: " << cr->getCor() << endl;
    cout << "Modelo: " << cr->getModelo() << endl;
    cout << "Velocidade atual: " << cr->getVelocidade() << endl;

    cr->frear();
    cout << "Velocidade atual: " << cr->getVelocidade() << endl;

    return 0;
}
