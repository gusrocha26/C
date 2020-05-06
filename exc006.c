#include <stdio.h>
#include <math.h>
/*Desenvolver um algoritmo para ler os comprimentos dos três lados de um triângulo (L1, L2 e L3) e 
calcular a área do triângulo.
*/


int main()
{
    float l1, l2, l3, areatriangulo, T;

    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);

    T = (l1 + l2 + l3)/2;

    areatriangulo = sqrt(T * (T -l1) * T * (T -l2) * T * (T -l3));

    printf("A AREA DO TRIANGULO E = %.2f\n", areatriangulo);


    return 0;
}