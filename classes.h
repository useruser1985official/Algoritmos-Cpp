#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>

using namespace std;

class Carro {
    public:
        // Atributos (Características, como variáveis)
        string cor;
        string modelo;
        int velocidade;

        // Métodos (Ações, como funções ou procedimentos)
        void acelerar();
        void frear();
};

#endif // CLASSES_H_INCLUDED
