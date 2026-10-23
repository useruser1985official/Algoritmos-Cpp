#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

// Version: 2.16 (Polimorfismo de Sobreposição e de Inclusão).
int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    Alimento *a1 = new Fruta();
    Alimento *a2 = new Verdura();

    a1->consumir();
    a2->consumir();

    delete a1;
    delete a2;

    return 0;
}
