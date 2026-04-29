#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 10; i++) {// loop externo que itera de 1 a 10
        for (int j = 1; j <= 10; j++) {// loop interno que itera de 1 a 10
            printf("%d\t", i * j);// imprime o produto de i e j, seguido de uma tabulação
        }
        printf("\n");// imprime uma nova linha após o término do loop interno
    }
    return 0;
}