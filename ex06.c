//6. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
//Calcular e escrever o valor do novo salário.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float salario_atual, percentual_reajuste, novo_salario;

    printf("Ola! Por favor, informe o salario atual do funcionario: ");
    scanf("%f", &salario_atual);
    
    printf("Agora, informe o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);

    novo_salario = salario_atual + (salario_atual * percentual_reajuste / 100);

    printf("O novo salario do funcionario sera %.2f: ", novo_salario);

return 0;
	
}

