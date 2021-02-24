#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DequeDinamico.h"

struct elemento{
	struct elemento *ant;
	struct cliente dados;
	struct elemento *prox;
};

typedef struct elemento Elem;

struct deque{
	
	struct elemento *inicio;
	struct elemento *final;
	int qtd;
};


//Cria Deque

Deque* cria_Deque(){
	Deque* dq = (Deque*)malloc (sizeof(Deque));
	if(dq !=NULL){
		dq->final = NULL;
		dq->inicio = NULL;
		dq->qtd = 0;
	}
	return dq;
}

//Destruindo o Deque

void libera_Deque(Deque* dq){
 if (dq != NULL){
	 Elem* no;
	 while(dq-> inicio != NULL){
		 no = dq -> inicio;
		 dq -> inicio = dq -> inicio -> prox;
		 free(no);
	 }
	 free(dq);
 }
}

//Tamqnho do Deque

int tamanho_Deque(Deque*dq){
	if(dq == NULL)
		return 0;
	return dq->qtd;
}

//Deque Vazio
int Deque_vazio(Deque* dq){
	if(dq == NULL)
		return 1;
	if(dq ->inicio == NULL)
		return 1;
	return 0;
}

// Deque Cheio nunca esta cheio 
int Deque_cheio(Deque* dq){
	return 0;
}

void consultainicio_Deque(Deque* dq){
	if(dq==NULL)
		printf("Informacao Invalida!!! \n");
	if(dq->inicio==NULL){
		printf("Deque vazio!!!\n");
	} else {
		printf("Codigo:%d \n",dq->inicio->dados.codigo);
		printf("Nome:%s \n",dq->inicio->dados.nome);
		printf("Idade:%d \n",dq->inicio->dados.idade);
		printf("CPF:%s \n",dq->inicio->dados.cpf);
	}
	
}

void consultafinal_Deque(Deque* dq){
	if(dq==NULL)
		printf("Informacao Invalida!!! \n");
	if(dq->final==NULL){
		printf("Deque vazio!!!\n");
	} else {
		printf("Codigo:%d \n",dq->final->dados.codigo);
		printf("Nome:%s \n",dq->final->dados.nome);
		printf("Idade:%d \n",dq->final->dados.idade);
		printf("CPF:%s \n",dq->final->dados.cpf);
	}
	
}

int insereinicio_Deque(Deque* dq, struct cliente cli){
	if(dq==NULL)
		return 0;
	Elem* no;
	no = (Elem*)malloc(sizeof(Elem));
	if(no==NULL)
		return 0;
	no->dados=cli;
	no->prox = dq->inicio;
	no->ant=NULL;
	if(dq->inicio==NULL)
		dq->final=no;
	else
	{
		dq->inicio->ant=no;
		dq->inicio=no;
		dq->qtd++;
		return 1;
	}
}

int inserefinal_Deque(Deque* dq, struct cliente cli){
	if(dq==NULL)
		return 0;
	Elem* no;
	no = (Elem*)malloc(sizeof(Elem));
	if(no==NULL)
		return 0;
	no->dados=cli;
	no->prox = NULL;

	if(dq->final==NULL){
		no->ant=NULL;
		dq->inicio=no;
	}
	else{
		no->ant=dq->final;
		dq->final->prox=no;
	}
	dq->final=no;
	dq->qtd++;
	return 1;
}

// Remove no inicio

int removeinicio_Deque(Deque* dq){
	if(dq==NULL)
		return 0;
	if(dq->inicio==NULL)
		return 0;
	Elem *no = dq->inicio;
	dq->inicio = dq->inicio->prox;
	if(dq->inicio==NULL)
		dq->final=NULL;
	else
	{
		dq->inicio->ant=NULL;
		free(no);
		dq->qtd--;
		return 1;
	}
}

int removefinal_Deque(Deque* dq){
	if(dq==NULL)
		return 0;
	if(dq->final==NULL)
		return 0;
	Elem *no = dq->final;
	if(no==dq->inicio){
		dq->inicio=NULL;
		dq->final=NULL;
	}
	else
	{
	no->ant->prox=NULL;
	dq->final = no->ant;
	}
	free(no);
	dq->qtd--;
	return 1;
}

