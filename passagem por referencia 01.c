#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf ("Dentro da Funcao %d e %d \n",*a, *b);
}

int main () {
	int x = 2;
	int y = 3;
	printf ("Antes da funcao %d e %d \n", x,y);
	troca (&x,&y);
	printf ("Depois da Funcao %d e %d \n",x,y);
	system ("pause");
	return 0;
}