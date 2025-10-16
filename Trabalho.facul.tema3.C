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

    if (populacao1>populacao2) {
        printf("\nCarta 1 tem maior populacao.\n");
    } else if (populacao2 > populacao1) {
        printf("\nCarta 2 tem maior populacao.\n");
    } else {
        printf("\nAs cartas tem igual populacao.\n");
    }
    
    return 0;
}