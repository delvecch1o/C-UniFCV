#include <stdlib.h>
#include <stdio.h>
 
void qualMes(int mes) {
    switch (mes) {
        case 1:
            printf("O mes selecionado foi: 1 chamado JANEIRO\n");
            break;
        case 2:
            printf("O mes selecionado foi: 2 chamado FEVEREIRO\n");
            break;
        case 3:
            printf("O mes selecionado foi: 3 chamado MARCO\n");
            break;
        case 4:
            printf("O mes selecionado foi: 4 chamado ABRIL\n");
            break;
        case 5:
            printf("O mes selecionado foi: 5 chamado MAIO\n");
            break;
        case 6:
            printf("O mes selecionado foi: 6 chamado JUNHO\n");
            break;
        case 7:
            printf("O mes selecionado foi: 7 chamado JULHO\n");
            break;
        case 8:
            printf("O mes selecionado foi: 8 chamado AGOSTO\n");
            break;
        case 9:
            printf("O mes selecionado foi: 9 chamado SETEMBRO\n");
            break;
        case 10:
            printf("O mes selecionado foi: 10 chamado OUTUBRO\n");
            break;
        case 11:
            printf("O mes selecionado foi: 11 chamado NOVEMBRO\n");
            break;
        case 12:
            printf("O mes selecionado foi: 12 chamado DEZEMBRO\n");
            break;
    }
}
 
int main() {
    int numMes;
 
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numMes);
 
    qualMes(numMes);
}