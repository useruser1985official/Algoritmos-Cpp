#include "classes.h"

void Animal::dormir() {
    cout << this->nome << " está dormindo..." << endl;
}

Animal::Animal(string nome) {
    this->nome = nome;
    cout << "Animal criado: " << this->nome << endl; // Não é recomendado usar comandos de saída no construtor, apenas está aqui como exemplo.
}

Animal::~Animal() {

}

string Animal::getNome() {
    return this->nome;
}

void Animal::setNome(string nome) {
    this->nome = nome;
}

void Cachorro::latir() {
    cout << this->getNome() << " está latindo..." << endl;
}

Cachorro::Cachorro(string nome) : Animal(nome) { // Chama o construtor da classe Animal
    cout << "Cachorro criado: " << this->getNome() << endl;
}

Cachorro::~Cachorro() {

}

void Gato::miar() {
    cout << this->getNome() << " está miando..." << endl;
}

Gato::Gato(string nome) : Animal(nome) { // Chama o construtor da classe Animal
    cout << "Gato criado: " << this->getNome() << endl;
}

Gato::~Gato() {

}
