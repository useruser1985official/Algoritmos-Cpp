#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

// Version: 2.19 (Polimorfismo Paramétrico) - Versão Final.
int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    Caixa<string> *texto = new Caixa<string>();

    texto->guardar("Olá");
    cout << texto->abrir() << endl;

    Caixa<int> *numero = new Caixa<int>();

    numero->guardar(42);
    cout << numero->abrir() << endl;

    Caixa<char> *letra = new Caixa<char>();

    letra->guardar('A');
    cout << letra->abrir() << endl;

    Caixa<bool> *logico = new Caixa<bool>();

    logico->guardar(true);
    cout << (logico->abrir() ? "true" : "false") << endl;

    delete texto;
    delete numero;
    delete letra;
    delete logico;

    return 0;
}
