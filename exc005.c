#include <stdio.h>
#include <math.h>
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e 
dos impostos (aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja de 12% do preço de 
ábrica e os impostos de 30% do preço de fábrica, 
fazer um programa para ler o custo de fábrica de um carro e imprimir o custo ao consumidor.
*/
int main()
{
    float custcarro, custotal;


    scanf("%f", &custcarro);

    custotal = (custcarro * 0.12 ) + (custcarro * 0.30) + custcarro;

    printf("O valor do consumidor e: %.2f\n", custotal);
    return 0;


}