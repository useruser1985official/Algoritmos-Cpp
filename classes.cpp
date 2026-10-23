#include "classes.h"

void Alimento::consumir() {
    cout << "Consumindo alimento..." << endl;
}

void Fruta::consumir() {
    Alimento::consumir(); // Chamando método da classe mãe.
    cout << "Comendo uma fruta fresca..." << endl;
}

void Verdura::consumir() {
    Alimento::consumir(); // Chamando método da classe mãe.
    cout << "Comendo uma verdura saudável..." << endl;
}
