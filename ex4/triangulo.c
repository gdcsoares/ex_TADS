#include <stdio.h>
#include <stdlib.h>
#include "triangulo.h"

Triangulo leDadosT(){
    Triangulo t;

    scanf("%f %f", &t.altura , &t.base);

    return t;
}

float CalculaAreaT(Triangulo t){
    return ((t.base*t.altura)/2);
}

float CalculaMultaT(float area){
    return area * 7000;
}