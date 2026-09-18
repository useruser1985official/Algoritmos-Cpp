#include "classes.h"

FonteEnergia::~FonteEnergia() {

}

void PilhaComum::fornecerEnergia() {
    cout << "Pilha comum: Fornecendo energia por um curto período." << endl;
}

void PilhaComum::recarregar() {
    cout << "Pilha comum não pode ser recarregada!" << endl;
}

void PilhaRecarregavel::fornecerEnergia() {
    cout << "Pilha recarregável: Fornecendo energia de forma estável." << endl;
}

void PilhaRecarregavel::recarregar() {
    cout << "Pilha recarregável recebendo carga!" << endl;
}

void BateriaLitio::fornecerEnergia() {
    cout << "Bateria de lítio: Fornecendo energia de alta performance." << endl;
}

void BateriaLitio::recarregar() {
    cout << "Bateria de lítio recebendo carga!" << endl;
}
