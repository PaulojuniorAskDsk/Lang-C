#include <stdio.h>
int main() {
    //cadastro de aluno
    //variaveis
    int matricula, idade;
    char nome[50];

    //entrada de dados
    printf("Digite a matricula do aluno:\n");
    scanf("%d", &matricula);
    
    printf("Digite o nome do aluno:\n");
    scanf("%s", nome);

    printf("Digite a idade do aluno:\n");
    scanf("%d", &idade);

    //saida de dados
    printf("Cadastro do aluno:\n");
    printf("Matricula: %d\n", matricula);
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    return 0;
}