#include <stdio.h>
#include <math.h>
#define pi 3.1415
#define valormetro 100


int main()
{
    float raio, altura, arealata, valortotal;

    scanf("%f", &raio);
    scanf("%f", altura);

    arealata = (pi * pow(raio,2) * 2) + (2 * pi * altura);
    valortotal = arealata * valormetro;

    printf("O VALOR DO CUSTO E = %.2f\n", valortotal);

    
}