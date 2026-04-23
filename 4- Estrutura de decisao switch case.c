/*Estrutura de decisão switch case em C
A estrutura de decisão switch case é usada para executar diferentes blocos de código com base no valor de uma variável. Ela é uma alternativa ao uso de múltiplas estruturas if-else, tornando o código mais legível e organizado quando há várias condições a serem verificadas.

switch (variavel) {
  case valor1:
    // Código a ser executado se variavel == valor1
    break;
  case valor2:
    // Código a ser executado se variavel == valor2
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    // Código a ser executado se nenhum dos casos acima for verdadeiro
}*/

#include <stdio.h>

int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}