#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    cout << 50 << endl;
    cout << 9.85 << endl;
    cout << 'A' << endl;
    cout << "Isso é um texto" << endl;
    cout << true << endl;

    return 0;
}
