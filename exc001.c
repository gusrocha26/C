#include <stdio.h>
//Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.


int main()
{    
   int num;

   scanf("%d", &num);

   if(((num % 5)== 0) && ((num%3)==0)){
	   printf("ELE E DIVISIVEL");
   }
    
	else
	{
	   printf("ele nao e divisivel");
	}
	



	return 0;
}