#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(float *salBruto){
    printf("Entre com o valor do salario bruto: ");
    scanf("%f", salBruto);
}

void processamento02(float *salBruto, float *salLiquido){
   if(*salBruto < 2000){
        *salLiquido = *salBruto - (*salBruto * (10 / 100.0));
   }else{
        *salLiquido = *salBruto - (*salBruto * (20 / 100.0));
   }
}

void saida02(float salLiquido){
    printf("\nO valor do salario liquido eh %.2f reais.", salLiquido);
}

void questao02(){
    float salBruto, salLiquido;

    entrada02(&salBruto);
    processamentvvo02(&salBruto, &salLiquido);
    saida02(salLiquido);
}

