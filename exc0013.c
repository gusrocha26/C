#include <stdio.h>


int main()
{
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("maior  %d", num1);
    }
    else if ( num1 ==  num2)
    {
        printf("numero igual");
    }
    else
    {
        printf("e maior  %d", num2);
    }
    




    return 0;
}