//conversao de tipos de dados
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; 
    int resto = a % b;
    
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
//ponto flutuante
    float c = 10.5;
    double d = 20.75;
    float soma_float = c + d;
    double produto_double = c * d;
    printf("Soma (float): %.2f\n", soma_float);
    printf("Produto (double): %.2f\n", produto_double);
//especificador de formato de casas decimais x.xf

//conversao inplicita e explicita
// casting
    int e = 5;
    float f = e; // conversão implícita
    //quando voce forçar um tipo de dado a ser convertido para outro tipo.(isso ocorre perda de dados)
    printf("Valor de f (conversão implícita): %.2f\n", f);

    float g = 3.14;
    //quando voce forçar um tipo de dado a ser convertido para outro tipo, isso e chamado de conversão explícita ou casting.
    int h = (int) g; // conversão explícita (casting)
    printf("Valor de h (conversão explícita): %d\n", h);

    return 0;
}
