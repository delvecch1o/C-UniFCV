#include <stdio.h>
#include <stdlib.h>

void soma_mais_um (int n){
	n++;
	printf ("Dentro da Funcao %d \n",n);
}

int main () {
	int x = 5;
	printf ("Antes da Funcao %d \n", x);
	soma_mais_um(x);
	printf ("Depois da Funcao %d \n",x);
	system ("pause");
	return 0;
	
}