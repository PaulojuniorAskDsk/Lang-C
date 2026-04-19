#include <stdio.h>
int main() {
    char produtoA[50], produtoB[50];

    unsigned int estoqueA= 1000;
    unsigned int estoqueB= 2000;

    float precoA= 10.50;
    float precoB= 20.75;

    unsigned int estoqueMinimoA= 100;
    unsigned int estoqueMinimoB= 200;

    double valorTotalA;
    double valorTotalB;

    printf("o produto %s tem um estoque de %u unidades, um preco de R$ %.2f e um estoque minimo de %u unidades.\n", produtoA, estoqueA, precoA, estoqueMinimoA);
    printf("o produto %s tem um estoque de %u unidades, um preco de R$ %.2f e um estoque minimo de %u unidades.\n", produtoB, estoqueB, precoB, estoqueMinimoB);

    //comparar valor mimimo
    

    return 0;
}