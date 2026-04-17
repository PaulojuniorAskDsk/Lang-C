//criando duas cartas do super trunfo
#include <stdio.h>

int main() {
    //parte das variaveis
    char estado1[20], estado2[20];
    char codigoCard1[20], codigoCard2[20];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numeroDePontosTusticos1, numeroDePontosTuristicos2;

    //carta 1
    printf("Digite o estado da carta 1: ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigoCard1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nomeCidade1);
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB1);
    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &numeroDePontosTusticos1);

    //carta 2
    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigoCard2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nomeCidade2);
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &numeroDePontosTuristicos2);

    return 0;
}