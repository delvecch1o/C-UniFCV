#include <stdio.h>
#include <stdlib.h>

void imprime (int a){
	int i;
	for (i = 0; i <=a; i++){
		printf ("Linha %d \n", i);
	}
}
int main () {
	imprime (5);
	return 0;
}