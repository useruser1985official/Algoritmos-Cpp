#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>
#include <cstring>

using namespace std;

class Microondas {
    public:
        void ligar();
        void ligar(int minutos, int segundos);
        void ligar(bool aquecer);
        void ligar(const char* programa);
};

#endif // CLASSES_H_INCLUDED
