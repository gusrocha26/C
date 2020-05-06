#include <stdio.h>
#include <math.h>
/*Desenvolver um algoritmo para ler o nome, idade e peso de três pessoas. Calcular e 
imprimir idade e o peso médio das três pessoas.
*/

int main()
{
    char nome1, nome2, nome3;
    int idade1, idade2, idade3;
    float peso1, peso2, peso3, pesomedio;


    scanf("%s", &idade1);
    scanf("%d", &idade1);
    scanf("%f", &peso1);

    scanf("%s", &idade2);
    scanf("%d", &idade2);
    scanf("%f", &peso2);

    scanf("%s", &idade3);
    scanf("%d", &idade3);
    scanf("%f", &peso3);

    pesomedio = peso1 + peso2 + peso3/3;
    
    printf(" A IDADE 1 = %d\n", idade1);
    printf(" A IDADE 2 = %d\n", idade2);
    printf(" A IDADE 3 = %d\n", idade3);
    printf(" O PESO MEDIO E =  %.2f\n", pesomedio);
    
    return 0;

}