#include "classes.h"

void Carro::acelerar() {
    this->velocidade += 10;
}

void Carro::frear() {
    this->velocidade -= 10;
}

Carro::Carro(string cor, string modelo, int velocidade) {
    this->cor = cor;
    this->modelo = modelo;
    this->velocidade = velocidade;
}

Carro::Carro(string cor, string modelo) : Carro(cor, modelo, 0) {

}

Carro::Carro() : Carro("", "", 0) {

}

Carro::~Carro() {
    cout << "Carro Destruído: " << this->modelo << endl;
}

string Carro::getCor() {
    return this->cor;
}

string Carro::getModelo() {
    return this->modelo;
}

int Carro::getVelocidade() {
    return this->velocidade;
}

void Carro::setCor(string cor) {
    this->cor = cor;
}

void Carro::setModelo(string modelo) {
    this->modelo = modelo;
}

void Carro::setVelocidade(int velocidade) {
    this->velocidade = velocidade;
}
