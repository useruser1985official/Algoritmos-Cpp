#include "classes.h"

void Carro::acelerar() {
    this->velocidade += 10;
}

void Carro::frear() {
    this->velocidade -= 10;
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
