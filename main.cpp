#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

// Version: 2.18 (Polimorfismo de Sobrecarga).
int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    Microondas *micro = new Microondas();

    micro->ligar(); // Sem parâmetros.
    micro->ligar(1, 30); // Minutos e segundos.
    micro->ligar(true); // Comando aquecer.
    micro->ligar("Pipoca"); // Programa Pipoca.
    micro->ligar("Pizza"); // Programa Pizza.

    delete micro;

    return 0;
}
