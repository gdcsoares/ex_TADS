#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(){
    int difDias;

    dataIni = le_data();
    dataFIm = le_data();

    difDias = diferencaDias(dataIni,dataFim);

    printf("%d", difDias);


    return 0;
}