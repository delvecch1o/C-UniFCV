#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetorA [3];
	int vetorB [3];
	int vetorC [3];
	int i;


	for (i = 0; i < 3; i++) {
	printf("Digite o %d numero do Vetor A: ",i+1);
	scanf("%d",&vetorA[i]);

	}
	printf("\n\n");

	for (i = 0; i < 3; i++) {
	printf("Digite o %d numero do Vetor B: ",i+1);
	scanf("%d",&vetorB[i]);

	}
		printf("\n\n");
	for (i = 0; i < 3; i++) {
		vetorC[i] = vetorA[i]-vetorB[i];
	}
	
	for (i = 0; i < 3; i++) {
	printf("A subtrcao entre [A] e [B] eh Veotr C :%d\n",vetorC[i]);
	}
	
	system ("pause");
    return 0;
}