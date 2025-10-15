#include <stdio.h>


// Calcula densidade, PIB per capita, Super Poder e compara as cartas

int main() {

    // Carta 1
    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    int populacao1;
    int pontos1;
    float area1;
    float pib1;

    // Carta 2
    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    int populacao2;
    int pontos2;
    float area2;
    float pib2;

    // Entrada carta 1
    printf("DIGITE O ESTADO:\n");
    scanf("%49s", estado1);
    printf("DIGITE A CIDADE:\n");
    scanf("%49s", cidade1);
    printf("DIGITE O CODIGO DA CARTA:\n");
    scanf("%49s", codigo1);
    printf("DIGITE A POPULACAO:\n");
    scanf("%d", &populacao1);
    printf("DIGITE A AREA KM2:\n");
    scanf("%f", &area1);
    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &pontos1);
    printf("DIGITE O PIB:\n");
    scanf("%f", &pib1);

    // Entrada carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("DIGITE O ESTADO:\n");
    scanf("%49s", estado2);
    printf("DIGITE A CIDADE:\n");
    scanf("%49s", cidade2);
    printf("DIGITE O CODIGO DA CARTA:\n");
    scanf("%49s", codigo2);
    printf("DIGITE A POPULACAO:\n");
    scanf("%d", &populacao2);
    printf("DIGITE A AREA KM2:\n");
    scanf("%f", &area2);
    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &pontos2);
    printf("DIGITE O PIB:\n");
    scanf("%f", &pib2);

    // Cálculos (usar floats para operações que exigem divisão não inteira)
    float densidade1 = (float)populacao1 / area1; // populacao / area
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = (float)populacao1 / pib1 ; // PIB / populacao
    float pibPerCapita2 = (float)populacao2 / pib2  ;

    // Super Poder: soma dos atributos numéricos
    // incluímos o inverso da densidade: 1 / densidade (quanto menor densidade, maior poder)
    float invDens1 = 1.0f / densidade1;
    float invDens2 = 1.0f / densidade2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + invDens1;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + invDens2;

    // Impressão dos valores calculados
    printf("\n--- RESULTADOS CARTA 1 ---\n");
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- RESULTADOS CARTA 2 ---\n");
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    
    // Para densidade: menor valor vence -> carta1 vence quando densidade1 < densidade2
    int densVence1 = (densidade1 < densidade2);
    int popVence1 = (populacao1 > populacao2);
    int areaVence1 = (area1 > area2);
    int pontosVence1 = (pontos1 > pontos2);
    int pibVence1 = (pib1 > pib2);
    int pibpcVence1 = (pibPerCapita1 > pibPerCapita2);
    int superVence1 = (superPoder1 > superPoder2);

    printf("\n--- COMPARACOES (1 = CARTA1 vence, 0 = CARTA2 vence) ---\n");
    printf("Densidade (menor vence): %d\n", densVence1);
    printf("Populacao (maior vence): %d\n", popVence1);
    printf("Area (maior vence): %d\n", areaVence1);
    printf("Pontos turisticos (maior vence): %d\n", pontosVence1);
    printf("PIB (maior vence): %d\n", pibVence1);
    printf("PIB per capita (maior vence): %d\n", pibpcVence1);
    printf("Super Poder (maior vence): %d\n", superVence1);

    return 0;
}