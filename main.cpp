#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    Carro *cr = new Carro("Vermelho", "Uno", 0);

    // Usando os métodos
    cr->acelerar();
    cout << "Cor: " << cr->getCor() << endl;
    cout << "Modelo: " << cr->getModelo() << endl;
    cout << "Velocidade atual: " << cr->getVelocidade() << endl;

    cr->frear();
    cout << "Velocidade atual: " << cr->getVelocidade() << endl;

    Carro *cr2 = new Carro("Preto", "Gol"); // Sem passar velocidade

    // Usando os métodos
    cr2->acelerar();
    cout << "Cor: " << cr2->getCor() << endl;
    cout << "Modelo: " << cr2->getModelo() << endl;
    cout << "Velocidade atual: " << cr2->getVelocidade() << endl;

    cr2->frear();
    cout << "Velocidade atual: " << cr2->getVelocidade() << endl;

    Carro *cr3 = new Carro(); // Sem passar nada

    // Definindo valores para os atributos:
    cr3->setCor("Azul");
    cr3->setModelo("Civic");
    cr3->setVelocidade(0);

    // Usando os métodos
    cr3->acelerar();
    cout << "Cor: " << cr3->getCor() << endl;
    cout << "Modelo: " << cr3->getModelo() << endl;
    cout << "Velocidade atual: " << cr3->getVelocidade() << endl;

    cr3->frear();
    cout << "Velocidade atual: " << cr3->getVelocidade() << endl;

    delete cr; // Destruindo objeto cr
    delete cr2; // Idem, com cr2
    delete cr3; // Idem, com cr3

    return 0;
}
