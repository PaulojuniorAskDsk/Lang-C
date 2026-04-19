#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigoCard1[20], codigoCard2[20];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    double PIB1, PIB2;                          // double para suportar valores grandes
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;  // corrigido o typo
    float densidadePopulacional1, densidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;
    
    unsigned int superPoder1, superPoder2; // variáveis para os super poderes

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
    scanf(" %lf", &PIB1);
    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf(" %d", &numeroDePontosTuristicos1);
    

    

    return 0;
}