#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

// Version: 2.15 (Herança Parte 2).
int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    Cachorro *cao = new Cachorro("Rex");

    cao->dormir(); // Herdado da classe Animal.
    cao->latir(); // Próprio de Cachorro.

    Gato *gat = new Gato("Frajola");

    gat->dormir(); // Herdado
    gat->miar(); // Próprio de Gato.

    delete cao;
    delete gat;

    return 0;
}
