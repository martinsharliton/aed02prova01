#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

float PI = 3.14;

void entrada01(float *raio){
    printf("Entre com o valor do raio: ");
    scanf("%f", raio);
}

void processamento01(float *raio, float *diametro, float *perimetro, float *area, float *volume){
    *diametro = 2 * (*raio);
    *perimetro = 2 * PI * (*raio);
    *area = PI * ((*raio) * (*raio));
    *volume = (4 / 3) * PI * ((*raio) * (*raio) * (*raio));
}

void saida01(float diametro, float perimetro, float area, float volume){
    printf("\n----- Dados -----");
    printf("\nDiametro = %.2f", diametro);
    printf("\nPerimetro = %.2f", perimetro);
    printf("\nArea = %.2f", area);
    printf("\nVolume = %.2f", volume);
}

void questao01(){
    float raio, diametro, perimetro, area, volume;

    entrada01(&raio);
    processamento01(&raio, &diametro, &perimetro, &area, &volume);
    saida01(diametro, perimetro, area, volume);
}
