#include <stdio.h>
int main() {
    char produtoA[30];
    char produtoB[30];

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.75;

    unsigned int estoqueMinimoA = 100;
    unsigned int estoqueMinimoB = 200;

    double valorTotalA;
    double valorTotalB;

    int resultadoA;
    int resultadoB;
    //exibir informações do produto
    printf("O produto %s tem um estoque de %u unidades e um valor de R$ %.2f\n", produtoA, estoqueA, valorA );
    printf("O produto %s tem um estoque de %u unidades e um valor de R$ %.2f\n", produtoB, estoqueB, valorB );

    //comparar valor minimo dos estoques
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d", produtoB, resultadoB);

    //comparar os valores totais

    printf("O valor total de A e maior que o valor total de B? %d",(estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}