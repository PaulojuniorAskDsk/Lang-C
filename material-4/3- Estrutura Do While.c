#include <stdio.h>
 /* a estrutura do-while ocorre quando queremos repetir um bloco de código pelo menos uma vez, e depois continuar repetindo enquanto uma condição for verdadeira */
int main() {
    int i = 1;
   
    do {// o bloco de código dentro do do-while é executado pelo menos uma vez, mesmo que a condição seja falsa
        printf("%d\n", i);
        i++;
    } while (i <= 5);// a condição é verificada após a execução do bloco de código, e se for verdadeira, o bloco é executado novamente
   
    return 0;
}