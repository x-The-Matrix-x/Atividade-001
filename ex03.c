//3. Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede.
//O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão necessárias para pintá-la. 
//Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//define CONSUMO_TINTA 300 // quantidade de ml de tinta por metro quadrado
//define QUANTIDADE_TINTA 2000 // quantidade de ml de tinta por lata

int main(){
	float largura, altura, area, quantidade_latas, quantidade_tinta, QUANTIDADE_TINTA, CONSUMO_TINTA;
	
	printf("Olá! Por favor, digite a largura da parede em metros: ");
	scanf("%f", &largura);
	
	printf("Digite a altura da parede em metros: ");
	scanf("%f", &altura);
	
	area = largura * altura; //calculando a area da parede em metros quadrados.
	
	quantidade_tinta = area * 300; //calculando a quantidade total de tinta necessaria em ml.
	
	quantidade_latas = ceil(quantidade_tinta / 2000); //calculando a quantidade de latas de tinta necessarias.
	//ceil: arredonda para cima
	
	printf("Serao necessarias %.0f latas de tinta para pintar a parede.\n", quantidade_latas);
	
return 0;

}


