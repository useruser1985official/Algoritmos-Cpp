#include <iostream>
#include <clocale>
#include <cctype>

using namespace std;

int fatorial(int n);

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    int num, fat;

    cout << "Digite um número maior que 1 para ver seu fatorial: ";
    cin >> num;

    fat = fatorial(num); // Invocando a função pela primeira vez

    cout << "Fatorial de " << num << " é: " << fat << "." << endl;

    return 0;
}

int fatorial(int n) {
    if(n <= 1) { // Quando n for 1 ou menor, ele apenas retorna 1 e para de executar a função
        return 1;
    }

    // Chamado recursivo: A função chama ela mesma:
    return n * fatorial(n - 1);
}
