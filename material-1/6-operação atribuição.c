//operação atribuição
#include <stdio.h>

int main()
{
    /*
    exemplos de operações de atribuição:
    a = b; // atribuição simples
    a += b; // adição e atribuição
    a -= b; // subtração e atribuição
    a *= b; // multiplicação e atribuição
    a /= b; // divisão e atribuição
    */
    int a = 10;
    int b = 20;
    int c = 30;

    a = b; // atribuição simples
    printf("a = %d\n", a); // a = 20    
    a += c; // adição e atribuição
    printf("a = %d\n", a); // a = 50
    a -= b; // subtração e atribuição
    printf("a = %d\n", a); // a = 30
    a *= 2; // multiplicação e atribuição
    printf("a = %d\n", a); // a = 60
    a /= 3; // divisão e atribuição
    printf("a = %d\n", a); // a = 20

    return 0;
}