//9. Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. 
//Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final �:
// ((n1*2)+(n2*3)+(n3*5))/2+3+5



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    float nNota1, nNota2, nNota3, nMedia, nMedia_ponderada;
    
    printf("Ola! Por favor, digite a primeira nota:\n");
    scanf("%f", &nNota1);
     
    printf("Digite a segunda nota:\n");
    scanf("%f", &nNota2);
    
    printf("Digite a terceira nota:\n");
    scanf("%f", &nNota3);
    
    nMedia=((nNota1*2)+(nNota2*3)+(nNota3*5));
    
    nMedia_ponderada=(nMedia/3);
    
    printf("A m�dia ponderada eh: %.1f\n", nMedia_ponderada);

return 0;

}
