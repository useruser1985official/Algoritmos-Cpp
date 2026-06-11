#include <iostream>
#include <clocale>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    int num, cont = 0;

    cout << "Digite um número: ";
    cin >> num;

    while(true) { // Laço infinito
        cont++;

        if(cont > num) { // Entra na condição e interrompe o laço com break
            break;
        }
        else if(cont % 2 == 1) { // Para escrever só os pares
            continue;
        }

        cout << cont << endl;
    }

    return 0;
}
