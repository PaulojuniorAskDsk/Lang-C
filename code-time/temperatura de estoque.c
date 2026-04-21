#include <stdio.h>

int main() {
    int temperatura,umidade;
    unsigned int estoque, estoqueMinimo = 1000;
    printf("Entre com a temperatura:\n");
    scanf("%d", &temperatura);
    printf("Entre com a umidade:\n");
    scanf("%d", &umidade);
    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("Temperatura alta, estoque em risco!\n");
    } else {
        printf("Temperatura adequada, estoque seguro.\n");
    }

    if (umidade > 70){
        printf("Umidade alta, estoque em risco!\n");
    } else {
        printf("Umidade adequada, estoque seguro.\n");
    }

    if (estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo, reabastecimento necessário!\n");
    } else {
        printf("Estoque adequado, sem necessidade de reabastecimento.\n");
    }
    return 0;
}