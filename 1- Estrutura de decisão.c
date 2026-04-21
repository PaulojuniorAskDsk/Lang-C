//estrutura de decisao
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {//estrutura de decisao simples
        printf("Voce e maior de idade.\n");
    } 

        else {//estrutura de decisao composta
            printf("Voce e menor de idade.\n");
        }
    return 0;
}