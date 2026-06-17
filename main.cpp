#include <iostream>
#include <clocale>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    int numeros[2][5];

    // Linha 0
    numeros[0][0] = 0;
    numeros[0][1] = 2;
    numeros[0][2] = 4;
    numeros[0][3] = 6;
    numeros[0][4] = 8;

    // Linha 1
    numeros[1][0] = 1;
    numeros[1][1] = 3;
    numeros[1][2] = 5;
    numeros[1][3] = 7;
    numeros[1][4] = 9;

    for(int l = 0; l < 2; l++) { // Linhas
        for(int c = 0; c < 5; c++) { // Colunas
            cout << numeros[l][c] << " "; // Não pula linha, só dá espaço
        }
        cout << endl; // Pula de linha, executado após o for interno terminar o laço dele
    }

    return 0;
}
