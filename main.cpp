#include <iostream>
#include <clocale>
#include <cctype>
#include <vector>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    // Chamando métodos estáticos diretamente pela classe
    double areaQ = UtilMath::areaQuadrado(5);
    double areaC = UtilMath::areaCirculo(3);

    cout << "Área do quadrado: " << areaQ << endl;
    cout << "Área do círculo: " << areaC << endl;

    // Acessando constante estática
    cout << "Valor de PI: " << UtilMath::PI << endl;

    return 0;
}
