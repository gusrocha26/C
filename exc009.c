#include <stdio.h>
/*Fazer um algoritmo que dados os 4 elementos de uma matriz 2 x 2. Calcule e escreva o valor do 
determinante desta matriz.
*/

int main()
{

  float A,B,C,D, det;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);
  scanf("%f", &D);

  det = (A * B) - (C * D);


  printf("O determinante e: %.2f", det);


    return 0;
}

