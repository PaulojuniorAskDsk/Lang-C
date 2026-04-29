#include <stdio.h>
 
int main() {
    int i = 1;// inicialização da variável de controle do loop externo
    while (i <= 10) {// condição de continuação do loop externo
        int j = 1;// inicialização da variável de controle do loop interno
        while (j <= 10) {// condição de continuação do loop interno
            printf("%d\t", i * j);// imprime o produto de i e j, seguido de uma tabulação
            j++;// incremento da variável de controle do loop interno
        }
        printf("\n");// imprime uma nova linha após o término do loop interno
        i++;// incremento da variável de controle do loop externo
    }
    return 0;
}