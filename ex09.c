//9. Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. 
//Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final �:
// ((n1*2)+(n2*3)+(n3*5))/2+3+5



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    float n1, n2, n3, media;

    printf("Ola! Por favor, digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = ((n1*2) + (n2*3) + (n3*5)) / (2+3+5);

    printf("A media final do aluno eh: %.2f", media);

return 0;

}



	



