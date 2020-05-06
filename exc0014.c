#include <stdio.h>


int main()
{
    float nota1, nota2, media;

    scanf("%f", &nota1);
    scanf("%f", &nota2);

    
    if(0 < nota1 < 10 && 0 < nota2 < 10)
    {
        media = (nota1 + nota2)/2;
        printf("Media = %.2f\n", media);

    }
    else
    {
        printf("programa invalido");
    }
    



    






    return 0;
}