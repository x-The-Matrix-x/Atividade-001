//4. Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    float base, altura, area;

    printf("Olá! Por favor, digite a base do retangulo em metros: ");
    scanf("%f", &base);

    printf("Agora, digite a altura do retangulo em metros: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do retangulo e de %.2f metros quadrados.", area);

return 0;

}
