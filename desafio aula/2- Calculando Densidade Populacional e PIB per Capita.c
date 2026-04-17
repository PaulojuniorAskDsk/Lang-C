// calculando densidade populacional e PIB per capita
#include <stdio.h>

int main() {
    // parte das variaveis
    char estado1[20], estado2[20];
    char codigoCard1[20], codigoCard2[20];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    double PIB1, PIB2;                          // double para suportar valores grandes
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;  // corrigido o typo
    float densidadePopulacional1, densidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;         // double para suportar valores grandes

    // carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %19[^\n]", estado1);
    printf("Digite o codigo da carta 1: ");
    scanf(" %19[^\n]", codigoCard1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %19[^\n]", nomeCidade1);
    printf("Digite a populacao da carta 1: ");
    scanf(" %d", &populacao1);
    printf("Digite a area da carta 1: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf(" %lf", &PIB1);                       // %lf para double
    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf(" %d", &numeroDePontosTuristicos1);
    densidadePopulacional1 = (float)populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;
    printf("A densidade populacional da carta 1 e: %.2f\n", densidadePopulacional1);
    printf("O PIB per capita da carta 1 e: %.2lf\n", PIBperCapita1);

    // carta 2
    printf("Digite o estado da carta 2: ");
    scanf(" %19[^\n]", estado2);
    printf("Digite o codigo da carta 2: ");
    scanf(" %19[^\n]", codigoCard2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %19[^\n]", nomeCidade2);
    printf("Digite a populacao da carta 2: ");
    scanf(" %d", &populacao2);
    printf("Digite a area da carta 2: ");
    scanf(" %f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf(" %lf", &PIB2);                       // %lf para double
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf(" %d", &numeroDePontosTuristicos2);
    densidadePopulacional2 = (float)populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;
    printf("A densidade populacional da carta 2 e: %.2f\n", densidadePopulacional2);
    printf("O PIB per capita da carta 2 e: %.2lf\n", PIBperCapita2);

    return 0;
}