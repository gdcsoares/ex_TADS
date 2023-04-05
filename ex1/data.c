#include "data.h"
#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;

}

tData le_data(){
    char data;
    tData data;
    
    scanf("%c",&data);
    sscanf(data,"%d/%d/%d",&data.dia,&data.mes,&data.ano);

    return data;
}

int diferencaDias(tData dataIni, tData dataFim){
    int diferenca;

    while(dataIni.dia!=dataFim.dia||dataInici.mes!=dataFIm.mes||dataIni.ano=!dataFim.ano){
        while((dataIni.mes<=12)){
            if(dataIni.dia==dataFim.dia&&dataInici.mes==dataFIm.mes&&dataIni.ano==dataFim.ano){
                return diferenca;
                break;
            }
                if(dataIni.mes==4||dataIni.mes==6||dataIni.mes==7||dataIni.mes==9){
                    while(dataIni.dia<=30){
                        if(dataIni.dia==dataFim.dia&&dataInici.mes==dataFIm.mes&&dataIni.ano==dataFim.ano){
                        return diferenca;
                        break;
                        }
                        dataIni.dia++;
                        diferenca++;

                    }
                dataIni.mes++;
                dataIni.dia=1;
                diferenca++;
                }
                if(dataIni.mes==2){
                    while(dataIni.dia<=28){
                        if(dataIni.dia==dataFim.dia&&dataInici.mes==dataFIm.mes&&dataIni.ano==dataFim.ano){
                        return diferenca;
                        break;
                        }
                        dataIni.dia++;
                        diferenca++;
                    }
                dataIni.mes++;
                dataIni.dia=1;
                diferenca++;
                }
                else{
                    while(dataIni.dia<=31){
                        if(dataIni.dia==dataFim.dia&&dataInici.mes==dataFIm.mes&&dataIni.ano==dataFim.ano){
                        return diferenca;
                        break;
                        }
                        dataIni.dia++;
                        diferenca++;
                    }
                dataIni.mes++;
                dataIni.dia=1;
                diferenca++;

                }  
        }      
        if(dataIni.dia==dataFim.dia&&dataInici.mes==dataFIm.mes&&dataIni.ano==dataFim.ano){
            return diferenca;
            break;
        }
        dataIni.ano++;
        dataIni.mes=1;
        dataIni.dia=1;
    }

    return diferenca;

}