#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>

using namespace std;

class Mouse {
    private:
        string tipo;
        bool semFio;

    public:
        Mouse(string tipo, bool semFio);
        ~Mouse();

        string getTipo();
        bool getSemFio();
};

class Computador {
    private:
        string marca;
        int gb;
        Mouse *ms; // Composição: Computador usa um mouse já criado internamente.
        // A classe Mouse permanece inalterada. O new pode ser colocado no construtor também e é até recomendado.

    public:
        Computador(string marca, int gb); // Não passa o mouse.
        ~Computador();

        void exibirInfo();

        // Getter com objeto composto.
        Mouse *getMs();
};

#endif // CLASSES_H_INCLUDED
