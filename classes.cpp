#include "classes.h"

Mouse::Mouse(string tipo, bool semFio) {
    this->tipo = tipo;
    this->semFio = semFio;
}

Mouse::~Mouse() {
    cout << "Mouse Destruído: " << this->tipo << endl;
}

string Mouse::getTipo() {
    return this->tipo;
}

bool Mouse::getSemFio() {
    return this->semFio;
}

Computador::Computador(string marca, int gb) {
    this->marca = marca;
    this->gb = gb;
    this->ms = new Mouse("Óptico", false);
}

Computador::~Computador() {
    cout << "Computador Destruído: " << this->marca << endl;

    delete this->ms;
}

void Computador::exibirInfo() {
    cout << "Marca do computador: " << this->marca << endl;
    cout << "Capacidade em GB: " << this->gb << endl;

    if(ms != NULL) {
        cout << "Mouse conectado: " << ms->getTipo() << endl;
        cout << "O mouse é sem fio? " << (ms->getSemFio() ? "true" : "false") << endl;
    }
    else {
        cout << "Nenhum mouse conectado!" << endl;
    }
}

Mouse *Computador::getMs() {
    return this->ms;
}
