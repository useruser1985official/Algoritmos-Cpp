#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>

using namespace std;

class Alimento {
    public:
        virtual void consumir();
};

class Fruta : public Alimento {
    public:
        void consumir() override;
};

class Verdura : public Alimento {
    public:
        void consumir() override;
};

#endif // CLASSES_H_INCLUDED
