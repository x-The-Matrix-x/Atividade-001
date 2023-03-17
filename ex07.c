//7. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor 
//e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
//escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float custoFabrica, custoConsumidor;
    float percentDistribuidor = 0.28; // o equivalente a 28%.
    float percentImpostos = 0.45; // o equivalente a 45%.

    printf("Ola! Por favor, digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * percentDistribuidor) + (custoFabrica * percentImpostos);

    printf("O custo final ao consumidor eh: R$%.2f", custoConsumidor);

return 0;
}





