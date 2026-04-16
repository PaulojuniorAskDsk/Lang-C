//incremento e decremento
#include <stdio.h>

int main()
{
    int a = 10;
    a++; // incremento, equivalente a a = a + 1
    printf("a = %d\n", a); // a = 11
    a--; // decremento, equivalente a a = a - 1
    printf("a = %d\n", a); // a = 10

    /* temos pre e pos decremento*/
    int b = 5;
    printf("b = %d\n", b); // b = 5
    printf("b++ = %d\n", b++); // b++ retorna o valor atual de b (5) e depois incrementa b para 6
    printf("b = %d\n", b); // b = 6
    printf("++b = %d\n", ++b); // ++b incrementa b para 7 e depois retorna o valor atualizado de b (7)
    printf("b = %d\n", b); // b = 7

    return 0;
}