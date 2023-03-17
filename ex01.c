//Quest�o 1: Fa�a um programa em que o usu�rio digite o custo de uma determinada mercadoria, em seguida, 
//adiciona-se ao custo o valor do frete e despesas eventuais (tamb�m solicitadas pelo teclado).
//Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
	float custo, frete, despesas, venda, lucro; //float: armazena n�meros com ponto flutuante (reais) com precis�o simples. 
	//Os tipos de dados float e double s�o usados para guardar n�meros reais.
	
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




