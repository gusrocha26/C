#include <stdio.h>
/* Faca um programa que receba um numero inteiro e verifique se este numero e par ou impar
*/


int main()
{
    int num;

    scanf("%d", &num);

    if (num %2 == 0)
    {
        printf("par");
    }

    else
    {
        printf("impar");
    }
    
    

    
    
    return 0;
}