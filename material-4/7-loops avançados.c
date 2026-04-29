#include <stdio.h>
 
int main() {
    // Loop com múltiplas variáveis
    //for (variável_inicialização; condição; incremento) {
    for (int i = 0, j = 10; i < j; i++, j--) {// Loop com múltiplas variáveis
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}