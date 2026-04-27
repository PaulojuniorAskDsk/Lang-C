#include <stdio.h>
 /* a estrutura  while ocorre quando queremos repetir um bloco de código enquanto uma condição for verdadeira */
int main() {
    int i = 1;//inicialização da variável de controle
   
    while (i <= 5) {//condição de continuação do loop
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}