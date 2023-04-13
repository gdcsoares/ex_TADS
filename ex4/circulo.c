#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#define PI 3.1415

Circulo leDadosC(){
    Circulo c;

    scanf("%f", &c.raio);

    return c;
}

float CalculaAreaC(Circulo c){
    return (c.raio*c.raio*PI);
}

float CalculaMultaC(float area){
    return area * 6000;
}