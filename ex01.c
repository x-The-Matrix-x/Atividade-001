//Questão 1: Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, 
//adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado).
//Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
	float custo, frete, despesas, venda, lucro; //float: armazena números com ponto flutuante (reais) com precisão simples. 
	//Os tipos de dados float e double são usados para guardar números reais.
	
	printf("Por favor, usuario, digite o custo da mercadoria: ");
	scanf("%f", &custo);
	
	printf("Agora, digite o valor do frete: ");
	scanf("%f", &frete);
	
	printf("Digite as despesas eventuais: ");
	scanf("%f", &despesas);
	
	custo += frete + despesas; // equivale a custo = custo + frete + despesas.
	
	printf("Usuario, qual o valor de venda da mercadoria? ");
	scanf("%f", &venda);
	
	lucro = (venda - custo) / custo * 100.0; //para indicar a porcentagem no resultado final.
	
	printf("A mercadoria teve um lucro de %.2f%%\n", lucro);
	
return 0;

}




