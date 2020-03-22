#include <stdio.h>
#include <stdlib.h>

int main () {
	float valores[10];
	int i;
	float positivos,negativos;
	double somaPositivos, somaNegativos =0;
	
	
	for ( i = 0; i < 10; i++) {
		printf("Digite um numero %d: ", i + 1);
		scanf("%f", &valores[i]);
		
	}
	
	positivos = valores[0];
	for ( i = 0; i < 10; i++) {
		if (valores[i] > 0) {
			somaPositivos = somaPositivos + valores[i];
		
	}
		}
		negativos = valores[0];
		for ( i = 0; i < 10; i++) {
		if (valores[i] < 0) {
			somaNegativos = somaNegativos + valores[i];
		
	}
		}
	
	printf("Numero positivo: %f\n", somaPositivos);
	printf("Numero negativo: %f\n", somaNegativos);
	
}

