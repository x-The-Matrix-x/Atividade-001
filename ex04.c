//4. Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    float base, altura, area;

    printf("Ol�! Por favor, digite a base do retangulo em metros: ");
    scanf("%f", &base);

    printf("Agora, digite a altura do retangulo em metros: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do retangulo e de %.2f metros quadrados.", area);

return 0;

}
