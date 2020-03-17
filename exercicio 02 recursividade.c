#include <stdio.h>
#include <stdlib.h>

int mult (int a, int b){ 
	if (a == 1)
		return b;
	else 
		return b + mult (a-1,b);
}

int main () {
	int numero1, numero2;
	printf ("Digite um numero:\n");
	scanf ("%d",&numero1);
	printf ("Digite outro numero:\n");
	scanf ("%d",&numero2);
	printf ("A funcao que multiplica um dado inteiro 'a' por um inteiro 'b' usando somas sucessivas eh %d",mult (numero1 , numero2));
		
}