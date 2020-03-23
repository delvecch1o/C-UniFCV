#include <stdlib.h>
#include <stdio.h>
 
char meses[][32] = {
    "JANEIRO",
    "FEVEREIRO",
    "MARCO",
    "ABRIL",
    "MAIO",
    "JUNHO",
    "JULHO",
    "AGOSTO",
    "SETEMBRO",
    "OUTUBRO",
    "NOVEMBRO",
    "DEZEMBRO",
};
 
void qualMes(int mes) {
    printf("O m�s selecionado foi: %d chamado %s\n", mes, meses[mes - 1]);
}
 
int main() {
    int numMes;
 
    printf("Digite um n�mero de 1 a 12: ");
    scanf("%d", &numMes);
 
    qualMes(numMes);
}