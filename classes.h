#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>

using namespace std;

class Animal {
    protected:
        string nome;

    public:
        void dormir();

        Animal(string nome);
        virtual ~Animal();

        string getNome();
        void setNome(string nome);
};

class Cachorro : public Animal {
    public:
        // Método adicionado somente em Cachorro.
        void latir();

        Cachorro(string nome);
        ~Cachorro();
};

class Gato : public Animal {
    public:
        // Método adicionado somente em Gato.
        void miar();

        Gato(string nome);
        ~Gato();
};

#endif // CLASSES_H_INCLUDED
