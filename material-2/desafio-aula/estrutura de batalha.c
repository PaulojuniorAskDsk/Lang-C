#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigoCard1[20], codigoCard2[20];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    double PIB1, PIB2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;

    unsigned int superPoder1, superPoder2;

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
    scanf(" %lf", &PIB2);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf(" %d", &numeroDePontosTuristicos2);

    // --- Calculos derivados ---
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    PIBperCapita1 = PIB1 / populacao1;
    PIBperCapita2 = PIB2 / populacao2;

    superPoder1 = 0;
    superPoder2 = 0;

    // --- Logica de pontos por categoria ---

    // Populacao: maior vence
    if (populacao1 > populacao2)        superPoder1++;
    else if (populacao2 > populacao1)   superPoder2++;

    // Area: maior vence
    if (area1 > area2)                  superPoder1++;
    else if (area2 > area1)             superPoder2++;

    // PIB: maior vence
    if (PIB1 > PIB2)                    superPoder1++;
    else if (PIB2 > PIB1)               superPoder2++;

    // Pontos turisticos: maior vence
    if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2)      superPoder1++;
    else if (numeroDePontosTuristicos2 > numeroDePontosTuristicos1)  superPoder2++;

    // PIB per Capita: maior vence
    if (PIBperCapita1 > PIBperCapita2)  superPoder1++;
    else if (PIBperCapita2 > PIBperCapita1) superPoder2++;

    // Densidade Populacional: MENOR vence (menos denso = melhor qualidade de espaco)
    if (densidadePopulacional1 < densidadePopulacional2)    superPoder1++;
    else if (densidadePopulacional2 < densidadePopulacional1) superPoder2++;

    // --- Exibicao dos resultados ---
    printf("\n========== RESULTADO DA BATALHA ==========\n");
    printf("Carta 1 (%s - %s): %u ponto(s)\n", nomeCidade1, estado1, superPoder1);
    printf("Carta 2 (%s - %s): %u ponto(s)\n", nomeCidade2, estado2, superPoder2);
    printf("------------------------------------------\n");

    // --- Estrutura de decisao final ---
    if (superPoder1 > superPoder2)
        printf("VENCEDOR: Carta 1 - %s!\n", nomeCidade1);
    else if (superPoder2 > superPoder1)
        printf("VENCEDOR: Carta 2 - %s!\n", nomeCidade2);
    else
        printf("EMPATE! Ambas as cartas fizeram %u ponto(s).\n", superPoder1);

    printf("==========================================\n");

    return 0;
}