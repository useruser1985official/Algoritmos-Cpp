#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    // Definindo três objetos do "tipo" da "interface" e a instância com as classes implementadoras da mesma.
    FonteEnergia *p1 = new PilhaComum();
    FonteEnergia *p2 = new PilhaRecarregavel();
    FonteEnergia *p3 = new BateriaLitio();

    p1->fornecerEnergia(); // Método definidos na "interface", sendo executado somente o que está em cada classe implementadora.
    p2->fornecerEnergia();
    p3->fornecerEnergia();

    p1->recarregar(); // Idem
    p2->recarregar();
    p3->recarregar();

    return 0;
}
