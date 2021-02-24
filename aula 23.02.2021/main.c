#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DequeDinamico.h"

int main (){
	Deque *dq;
	int x;
	struct cliente dadoscli;
	dq = cria_Deque();
	x = tamanho_Deque(dq);
	printf("Tamanho do Deque %d\n",x);
	dadoscli.codigo = 1;
	strcpy(dadoscli.nome,"Rodrigo");
	dadoscli.idade = 40;
	strcpy(dadoscli.cpf,"11111111111");
	x = insereinicio_Deque(dq,dadoscli);
	printf("Foi inserido:%d \n",x);
	dadoscli.codigo = 2;
	strcpy(dadoscli.nome,"Mario");
	dadoscli.idade = 24;
	strcpy(dadoscli.cpf,"22222222222");
	x = inserefinal_Deque(dq,dadoscli);
	printf("Foi inserido:%d \n",x);
	x = tamanho_Deque(dq);
	printf("Tamanho do Deque %d \n",x);
	consultainicio_Deque(dq);
	consultafinal_Deque(dq);
	x=Deque_vazio(dq);
	printf("Deque vazio %d \n",x);
	x = Deque_cheio(dq);
	printf("Deque cheio %d \n",x);
	x = removefinal_Deque(dq);
	printf("Removido %d \n",x);
	libera_Deque(dq);
	return 1;
}