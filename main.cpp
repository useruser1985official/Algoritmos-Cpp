#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    int numero;
    float real;
    char letra;
    string frase;

    cout << "Digite um número inteiro: ";
    cin >> numero;
    cout << "Digite um número real: ";
    cin >> real;
    cout << "Digite uma única letra: ";
    cin >> letra;
    cout << "Digite uma frase: ";
    cin.ignore();
    getline(cin, frase);

    system("cls");

    cout << numero << endl;
    cout << real << endl;
    cout << letra << endl;
    cout << frase << endl;

    return 0;
}
