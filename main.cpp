#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos em C++ & color 0A");

    int idade;
    string fase;

    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade < 10) {
        fase = "infância";
    }
    else if(idade >= 10 && idade < 13) {
        fase = "pré-adolescência";
    }
    else if(idade >= 13 && idade < 18) {
        fase = "adolescência";
    }
    else if(idade >= 18 && idade < 65) {
        fase = "fase adulta";
    }
    else {
        fase = "fase idosa";
    }

    cout << "Na idade de " << idade << " anos, você está na " << fase << "." << endl;

    return 0;
}
