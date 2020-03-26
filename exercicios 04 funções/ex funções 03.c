#include <stdio.h>
#include <stdlib.h>

int  Horarios ( int horas, int minutos, int segundos) {
	int resultado;
	
	resultado =( horas * 3600)+ (minutos * 60 )+ (segundos * 1);
	
	return resultado;
}

int main () {
	int h, m, s, resposta;
	printf("Digite que horas sao: ");
	scanf ("%d",&h);
	printf("Digite os minutos: ");
	scanf ("%d",&m);
	printf("Digite os segundos: ");
	scanf ("%d",&s);
	
	resposta = Horarios(h,m,s);
	
	printf("As horas convertida em segundos eh %d\n ", resposta);
	system ("pause");
	return 0;
}
 