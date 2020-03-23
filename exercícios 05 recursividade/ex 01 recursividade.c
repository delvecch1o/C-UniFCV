#include <stdio.h>
#include <stdlib.h>

int fatorial (int n) {
	if (n == 0)
		return 1;
	else 
		return n * fatorial (n - 1); // metodo geral ele vai chamar a função recurssivamente.
}

int main () {
	int numero;
	printf ("Digite um numero fatorial:\n");
	scanf("%d", &numero);
	printf ("O numero fatorial %d eh %d ",numero,fatorial (numero));
	}