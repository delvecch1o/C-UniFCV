#include <stdio.h>
#include <stdlib.h>


int main() {

int mat[3][3] ;
int i, j, soma = 0;
int maior,menor;
for (i=0; i < 3; i++){
	for (j=0; j < 3; j++){
		printf("Digite o valor da matriz [%d][%d]",i+1,j+1);
		scanf("%d",&mat[i][j]);
		if (mat[i][j]<menor){
			menor = mat[i][j];
		}
		if (mat[i][j]>maior){
			maior = mat[i][j];
		}
	}
}

    printf("O menor numero e: [%d]\n",menor);
    printf("O maior numero e: [%d]\n",maior);

system("pause");
return 0;
} 