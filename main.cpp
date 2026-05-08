#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    int i = 0;

    cout << ++i << endl;
    cout << --i << endl;

    return 0;
}
