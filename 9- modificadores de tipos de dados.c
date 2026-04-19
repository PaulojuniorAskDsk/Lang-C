#include <stdio.h>
int main() {
    //insigned int a = -1; //erro: valor negativo para tipo sem sinal
    unsigned int a = 4294967295; //valor máximo para um inteiro sem sinal
    //long int b = 2147483648; //erro: valor excede o limite para long int
    long int b = 2147483647; //valor máximo para long int
    //long long int c = 9223372036854775807; //valor máximo para long long int
    long long int c = 9223372036854775806; //valor próximo ao máximo para long long int/ ocorreria um warning por ultrapassar o limite

    //são modificadores de tipos de dados que alteram o comportamento dos tipos primitivos, permitindo armazenar valores maiores ou menores, ou apenas valores positivos. Eles são usados para otimizar o uso de memória e garantir a integridade dos dados.
    return 0;
}