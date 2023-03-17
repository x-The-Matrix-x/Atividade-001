//2. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	float raio, area; //float: numeros reais.
	
	printf("Por favor, usuario, Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio* raio);
	
	printf("\nUsuario, a area do circulo com raio %.2f eh %2.f\n", raio, area);
	
return 0;
	
}


