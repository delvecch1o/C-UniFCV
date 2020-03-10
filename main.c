#include <stdio.h>
#include <stdlib.h>

int imprime () { // se colocar o [int imprime (void)] da erro
	printf ("Teste de funcoes \n");
}
int main () {
	  imprime ();
	  imprime (5);
	  imprime (5, 'a');
	  return 0;	
	
}