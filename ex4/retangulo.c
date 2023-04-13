#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

Retangulo leDadosR(){
    Retangulo r;

    scanf("%f %f", &r.comprimento , &r.largura);

    return r;
}

float CalculaAreaR(Retangulo r){
    return (r.comprimento*r.largura);
}

float CalculaMultaR(float area){
    return area * 8000;
}