#include <iostream>
#include <clocale>
#include <cctype>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    // Criando uma instância (objeto) da classe Carro
    Carro *cr = new Carro();

    // Definindo valores para os atributos
    cr->cor = "Vermelho";
    cr->modelo = "Uno";
    cr->velocidade = 0;

    // Usando os métodos
    cr->acelerar();
    cout << "Cor: " << cr->cor << endl;
    cout << "Modelo: " << cr->modelo << endl;
    cout << "Velocidade atual: " << cr->velocidade << endl;

    cr->frear();
    cout << "Velocidade atual: " << cr->velocidade << endl;

    // Criando outra instância (objeto) da classe Carro
    Carro *cr2 = new Carro();

    // Definindo valores para os atributos:
    cr2->cor = "Preto";
    cr2->modelo = "Gol";
    cr2->velocidade = 0;

    // Usando os métodos:
    cr2->acelerar();
    cr2->acelerar();
    cout << "Cor: " << cr2->cor << endl;
    cout << "Modelo: " << cr2->modelo << endl;
    cout << "Velocidade atual: " << cr2->velocidade << endl;

    cr2->frear();
    cout << "Velocidade atual: " << cr2->velocidade << endl;

    return 0;
}
