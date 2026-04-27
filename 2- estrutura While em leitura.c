#include <stdio.h>
 
int main() {
    int num;// Variável para armazenar o número digitado pelo usuário
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);// Lê o primeiro número do usuário
   
    while (num >= 0) {// Enquanto o número for não negativo, continue o loop
        printf("Você digitou: %d\n", num);// Exibe o número digitado pelo usuário
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");// Mensagem de saída quando um número negativo for digitado
   
    return 0;
}