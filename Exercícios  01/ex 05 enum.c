#include <stdio.h>
#include <stdlib.h>
enum semana {segunda,terca,quarta,quinta,sexta,sabado,domingo};

int main(){
int i;
printf("Digite um numero: ");
scanf("%d",&i);	
	
	switch(i-1)
	{
	case segunda:
		printf("Segunda\n");
		break;
	case terca:
		printf("Terca\n");
		break;
	case quarta:
		printf("Quarta\n");
		break;
	case quinta:
		printf("Quinta\n");
		break;
	case sexta:
		printf("Sexta\n");
		break;
	case sabado:
		printf("Sabado\n");
		break;
	case domingo:
		printf("Domingo\n");
		break;
	
	default:
		printf("Nao corresoponde a nenhuma dia da semana!\n");
		break;
	}
	
   system("pause");
    return 0;
}