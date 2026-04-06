//desafio o codigo deve registrar de duas cartas e depois exbir a cartas.
#include <stdio.h>

int main (){
    char estado1[20], estado2[20];
    char codigoCarta1[20], codigoCarta2[20];
    char nomecidade1[20], nomecidade2[20];
    int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;

    //inserido dos dados da carta 1
    printf("Digite o estado da carta 1:\n ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta 1:\n ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade da carta 1:\n ");
    scanf("%s", nomecidade1);
    printf("Digite a populacao da carta 1:\n ");
    scanf("%d", &populacao1);
    printf("Digite a area da carta 1:\n ");
    scanf("%lf", &area1);
    printf("Digite o PIB da carta 1:\n ");
    scanf("%lf", &pib1);
    //inserido dos dados da carta 2
    printf("Digite o estado da carta 2:\n ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta 2:\n ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade da carta 2:\n ");
    scanf("%s", nomecidade2);
    printf("Digite a populacao da carta 2:\n ");
    scanf("%d", &populacao2);
    printf("Digite a area da carta 2:\n ");
    scanf("%lf", &area2);
    printf("Digite o PIB da carta 2:\n ");
    scanf("%lf", &pib2);

    //exibindo os dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf\n", area1);
    printf("PIB: %.2lf\n", pib1);

    //exibindo os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf\n", area2);
    printf("PIB: %.2lf\n", pib2);
    
    return 0;
}