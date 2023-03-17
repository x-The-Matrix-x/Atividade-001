//8. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
//mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
//Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, 
//o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    float salario_fixo, valor_por_carro, valor_vendas, comissao, salario_final;
    int carros_vendidos;

    printf("Ola! Por favor, digite o numero de carros vendidos pelo vendedor: ");
    scanf("%d", &carros_vendidos);

    printf("Digite o valor total de vendas do vendedor: ");
    scanf("%f", &valor_vendas);

    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor que o vendedor recebe por carro vendido: ");
    scanf("%f", &valor_por_carro);

    comissao = (valor_vendas * 0.05) + (carros_vendidos * valor_por_carro);
    
    salario_final = salario_fixo + comissao;

    printf("O salario final do vendedor eh de: %.2f\n", salario_final);

return 0;

}
