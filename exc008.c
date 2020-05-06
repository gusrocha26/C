#include <stdio.h>
#include <math.h>

/*Dados dois pontos A e B, cujas coordenadas A(x1, y1) e B(x2, y2) serão informadas via teclado, desenvolver 
um algoritmo que calcule a distância entre A e B.
*/

int main()
{
  float x1, y1, x2, y2, distAB;
  printf("Digite os pontos de A: \n");
  scanf("%f", &x1);
  scanf("%f", &y1);

  printf("Digite os pontos de B: \n");
  scanf("%f", &x2);
  scanf("%f", &y2);

  distAB = sqrt(pow((x2- x1), 2) + pow((y2-y1),2));

  printf("A distancia de A e B e: %.2f", distAB);

  return 0;


}
