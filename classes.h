#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>
#include <cstring>

using namespace std;

template<class E> class Caixa { // O E será substituído pela classe
    private:
        E conteudo;

    public:
        void guardar(E valor);
        E abrir();
};

template<class E> void Caixa<E>::guardar(E valor) {
    this->conteudo = valor;
}

template<class E> E Caixa<E>::abrir() {
    return this->conteudo;
}

#endif // CLASSES_H_INCLUDED
