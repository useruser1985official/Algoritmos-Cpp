#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    // O computador já é criado com o mouse, nesse caso.
    Computador *pc = new Computador("Dell", 1024);

    pc->exibirInfo();

    cout << pc->getMs()->getTipo() << endl; // getMs do Computador retorna o objeto Mouse, do qual retornamos o método getTipo

    delete pc;

    return 0;
}
