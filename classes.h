#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>

using namespace std;

class FonteEnergia {
    public:
        virtual void fornecerEnergia() = 0;
        virtual void recarregar() = 0;

        virtual ~FonteEnergia() = 0;
};

class PilhaComum : public FonteEnergia {
    public:
        void fornecerEnergia() override;
        void recarregar() override;
};

class PilhaRecarregavel : public FonteEnergia {
    public:
        void fornecerEnergia() override;
        void recarregar() override;
};

class BateriaLitio : public FonteEnergia {
    public:
        void fornecerEnergia() override;
        void recarregar() override;
};

#endif // CLASSES_H_INCLUDED
