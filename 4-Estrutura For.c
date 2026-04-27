#include <stdio.h>

/* a estrutura for ocorre quando queremos repetir um bloco de código um número específico de vezes, ou seja, quando sabemos de antemão quantas vezes o loop deve ser executado */
 /*
 for (inicialização; condição; incremento) {
    // bloco de código a ser executado repetidamente
}
    */
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
   
    return 0;
}