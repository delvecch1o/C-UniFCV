#include <stdio.h>
#include <stdlib.h>

float somarVetor (float *vetor, const int n){
	float soma = 0;
	float *ponteiro;
	int *const finalVetor = vetor + n;


	for (ponteiro = vetor; ponteiro < finalVetor; ponteiro ++){
		soma = soma  + *ponteiro / 10;
}
 	 return soma;
} 




int main(){
	
	int i;
	float vet[10];
	
	for (i = 0 ; i < 10 ; i++){
	printf("Digite a nota do %d aluno: ", i + 1);
	scanf("%f",&vet[i]);

	}
    float somarVetor (float vetor [], const int n);// não precisaria de ter essa linha p/ funcionar, só para facilitar a leitura.
	printf("\n A media dos alunos eh %f\n ", somarVetor(vet,10));
	
    system ("pause");
    return 0;
}