#include <stdio.h>
#include <stdlib.h>

void  Numeros ( int n1, int n2) {

 if (n1 > n2){
 printf("O maior numero eh %d\n",n1);
 }
else   {
printf("O maior numero eh %d\n",n2);

}
}






int main () {
	int n1;
	int n2;
	printf("Digite o primero numero\n");
	scanf("%d",&n1);
	printf("Digite o segundo numero\n");
	scanf ("%d",&n2);
	system ("pause");
	Numeros (n1,n2);
	return 0;
}