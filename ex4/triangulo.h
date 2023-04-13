#ifndef _TRIANGULO_H
#define _TRIANGULO_H


typedef struct{
    float altura;
    float base;
}Triangulo;

Triangulo leDadosT();

float CalculaAreaT(Triangulo t);

float CalculaMultaT(float area);






#endif