#include <stdio.h>
#include <stdlib.h>

 void  maior(int n1, int n2) {

	if (n1 > n2){
		printf("%d\n", n1);
	}
		else {
			printf("O maior numero eh\n",n2);
		}
	}

int main() {
int n1, n2;
printf("Digite um numero: ");
scanf("%d",&n1);

printf("Digite um numero: ");
scanf("%d",&n2);

maior (n1,n2);

system("pause");
return 0;
}
