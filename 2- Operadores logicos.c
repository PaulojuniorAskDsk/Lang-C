#include <stdio.h>

int main() {
    int a, b;
//operadores logicos
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {//os dois numeros tem que ser positivos para entrar nesse if
        printf("Ambos os numeros sao positivos.\n");
    } else if (a > 0 || b > 0) {//os dois numeros tem que ser negativos para entrar nesse if
        printf("Pelo menos um dos numeros e positivo.\n");
    } else {
        printf("Nenhum dos numeros e positivo.\n");
    }

    //not
    if (!(a > 0)) {//se a nao for positivo
        printf("a nao e positivo.\n");
    } else {
        printf("a e positivo.\n");
    }
 //Precedencia dos operadores logicos

    if (a > 0 || b > 0 && a < 10) {//o operador && tem precedencia sobre o ||
        printf("Condicao verdadeira.\n");
    } else {
        printf("Condicao falsa.\n");
    }

     if ((a > 0 || b > 0) && a < 10) {//com os parenteses o operador || tem precedencia sobre o &&
        printf("Condicao verdadeira.\n");
    } else {
        printf("Condicao falsa.\n");
    }
    
    return 0;
}