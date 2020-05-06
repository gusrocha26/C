#include <stdio.h>
#include <math.h>




int main()
{
    int num1, num2, num3, num4, soma;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);


    if(num1 > num2 && num1 > num3 && num1 > num4)
    {
        soma = num2 + num3 + num4;
        printf("%d\n", soma);
    }

    else if (num2 > num1 && num2 > num3 && num2 >num4)
    {
        soma = num1 + num3 + num4;
        printf("%d\n", soma);
    }

    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        soma = num1 + num2 + num4;
        printf("%d\n", soma);
    }
    else if (num4 > num1 && num4 > num2 && num4> num3)
    {
        soma = num1 + num2 + num3;
        printf("%d\n", soma);
    }
    

    return 0;

    }