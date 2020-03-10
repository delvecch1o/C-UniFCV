#include <stdio.h>
#include <stdlib.h>

// protótipo da função

int quadrado (int a);

int main () {
	int n1, n2;
	printf("Digite um numero: ");
	scanf ("%d", &n1);
	n2 = quadrado (n1);
	printf("O quadrado de %d eh %d\n",n1,n2);
	system ("pause");
	return 0;
}
int quadrado (int a) {
	return a * a;
}