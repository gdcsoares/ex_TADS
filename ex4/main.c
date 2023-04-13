#include <stdio.h>
#include <stdlib.h>
#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"

int main(){
    char tipo;
    int i, n;

    scanf("%d", &n);
    for(i=0;i<=n*2;i++){
       
        scanf("%c",&tipo);

        if(tipo=='T'){
            Triangulo t = leDadosT();
            float areaT = CalculaAreaT(t);
            float multaT = CalculaMultaT(areaT);
            printf("Preço: %.2f\n", multaT);
        }

        else if(tipo=='C'){
            Circulo c = leDadosC();
            float areaC = CalculaAreaC(c);
            float multaC = CalculaMultaC(areaC);
            printf("Preço: %.2f\n", multaC);

        }

        else if (tipo=='R'){
            Retangulo r = leDadosR();
            float areaR = CalculaAreaR(r);
            float multaR = CalculaMultaR(areaR);
            printf("Preço: %.2f\n", multaR);

        } 
        
    }


}









