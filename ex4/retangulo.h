#ifndef _RETANGULO_H
#define _RETANGULO_H

typedef struct{
    float comprimento;
    float largura;
}Retangulo;

Retangulo leDadosR();

float CalculaAreaR(Retangulo r);

float CalculaMultaR(float area);




#endif