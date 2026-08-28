#include "classes.h"

const double UtilMath::PI = 3.14159265359;

double UtilMath::areaQuadrado(double lado) {
    return lado * lado;
}

double UtilMath::areaCirculo(double raio) {
    return PI * raio * raio;
}
