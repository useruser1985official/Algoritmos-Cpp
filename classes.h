#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>

using namespace std;

class Carro {
    // Atributos privados (encapsulados)
    private:
        string cor;
        string modelo;
        int velocidade;

    // Métodos públicos:
    public:
        void acelerar();
        void frear();

        // Getters
        string getCor();
        string getModelo();
        int getVelocidade();

        // Setters
        void setCor(string cor);
        void setModelo(string modelo);
        void setVelocidade(int velocidade);
};

#endif // CLASSES_H_INCLUDED
