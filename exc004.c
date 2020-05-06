#include <stdio.h>
#include <math.h>
/*Fazer um programa para ler os valores dos coeficientes A, B e C de uma 
equação quadrática e calcular e imprimir o valor do discriminante (delta)
*/



int main()
{
   float A, B, C, DELTA;

   scanf("%f", &A);
   scanf("%f", &B);
   scanf("%f", &C);

   DELTA = pow(B,2) - 4 * A * C;



   printf("O VALOR DO DELTA E %.2f\n", DELTA);



    return 0;
}