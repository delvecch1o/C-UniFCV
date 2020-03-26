#include <stdio.h>
#include <stdlib.h>
/* void imprime(int *n, int m){
int i;
for (i =0; i < m; i++){
printf("%d \n", n[i]); }
}
int main() {
int v[5] = {1,2,3,4,5};
imprime(v,5);
system("pause");
return 0;
}
*/

int somarVetor (int *vetor, const int n){
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n;


	for (ponteiro = vetor; ponteiro < finalVetor; ponteiro ++){
		soma = soma  + *ponteiro;
}
 	 return soma;
} 




int main(){
	
	int i;
	int vet[10];
	
	for (i = 0 ; i < 10 ; i++){
	printf("Digite o %d numero: ", i + 1);
	scanf("%d",&vet[i]);

	}
    int somarVetor (int vetor [], const int n);// não precisaria de ter essa linha p/ funcionar, só para facilitar a leitura.
	printf("\n A soma dos valores eh %d\n ", somarVetor(vet,10));
	
    system ("pause");
    return 0;
}