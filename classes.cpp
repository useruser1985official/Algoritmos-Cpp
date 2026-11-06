#include "classes.h"

// 1. Ligar sem parâmetros.
void Microondas::ligar() {
    cout << "Microondas ligado com tempo padrão." << endl;
}

// 2. Ligar com minutos e segundos (dois inteiros).
void Microondas::ligar(int minutos, int segundos) {
    if((minutos >= 1 && segundos >= 0) || (minutos == 0 && segundos >= 1)) {
        cout << "Microondas ligado por " << minutos << " min e " << segundos << " s." << endl;
    }
    else {
        cout << "ERRO! Tempo inválido!" << endl;
    }
}

// 3. Ligar com comando aquecer (true/false);
void Microondas::ligar(bool aquecer) {
    if(aquecer) {
        cout << "Microondas ligado no modo aquecer." << endl;
    }
    else {
        cout << "ERRO! Não posso aquecer!" << endl;
    }
}

// 4. Ligar usando programas especiais (const char).
void Microondas::ligar(const char* programa) {
    string prog = (string)programa;

    if(!prog.compare("Pipoca")) {
        cout << "Microondas ligado para estourar pipoca." << endl;
    }
    else if(!prog.compare("Pizza")) {
        cout << "Microondas ligado para assar pizza." << endl;
    }
    else {
        cout << "ERRO! Programa desconhecido!" << endl;
    }
}
