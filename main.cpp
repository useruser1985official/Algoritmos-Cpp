#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    bool chovendo = true; // Experimente trocar por false

    cout << "Posso ficar sem guarda-chuva? " << !chovendo << endl;

    return 0;
}
