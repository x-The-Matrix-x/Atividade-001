//5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
//meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    int anos, meses, dias, idade_em_dias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    idade_em_dias = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias é: %d\n", idade_em_dias);

return 0;

}
