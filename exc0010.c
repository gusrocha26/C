#include <stdio.h>
//Dada a base e a altura de uma pirâmide. Fazer um algoritmo que calcule e escreva o volume desta.




int main()
{
    float base, altura, volume;

    scanf("%f", &base);
    scanf("%f", &altura);

    volume = 1/3.0 *(base * altura);

    printf("O volume da piramide e = %.2f\n", volume);

    return 0;
}