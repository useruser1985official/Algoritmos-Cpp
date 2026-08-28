#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <cstddef>

using namespace std;

class UtilMath {
    public:
        static const double PI;

        static double areaQuadrado(double lado);
        static double areaCirculo(double raio);
};

#endif // CLASSES_H_INCLUDED
