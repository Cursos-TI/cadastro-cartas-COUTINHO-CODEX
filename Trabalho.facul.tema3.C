#include <stdio.h>
#include <stdlib.h>

// Variáveis para carta 1
char estado1[50];
char cidade1[50];
char codigo1[50];
int populacao1;
int pontos_turisticos1;
float area1;
float pib1;
float densidade1;

// Variáveis para carta 2
char estado2[50];
char cidade2[50];
char codigo2[50];
int populacao2;
int pontos_turisticos2;
float area2;
float pib2;
float densidade2;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrar_carta1() {
    printf("\n--- CARTA 1 ---\n");
    printf("DIGITE O ESTADO: ");
    scanf("%49s", estado1);
    printf("DIGITE A CIDADE: ");
    scanf("%49s", cidade1);
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%49s", codigo1);
    printf("DIGITE A POPULACAO: ");
    scanf("%d", &populacao1);
    printf("DIGITE A AREA KM2: ");
    scanf("%f", &area1);
    printf("DIGITE O NUMERO DE PONTOS TURISTICOS: ");
    scanf("%d", &pontos_turisticos1);
    printf("DIGITE O PIB: ");
    scanf("%f", &pib1);
    densidade1 = (float)populacao1 / area1;
}

void cadastrar_carta2() {
    printf("\n--- CARTA 2 ---\n");
    printf("DIGITE O ESTADO: ");
    scanf("%49s", estado2);
    printf("DIGITE A CIDADE: ");
    scanf("%49s", cidade2);
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%49s", codigo2);
    printf("DIGITE A POPULACAO: ");
    scanf("%d", &populacao2);
    printf("DIGITE A AREA KM2: ");
    scanf("%f", &area2);
    printf("DIGITE O NUMERO DE PONTOS TURISTICOS: ");
    scanf("%d", &pontos_turisticos2);
    printf("DIGITE O PIB: ");
    scanf("%f", &pib2);
    densidade2 = (float)populacao2 / area2;
}

int main() {
    int opcao1, opcao2;
    float soma_carta1 = 0, soma_carta2 = 0;
    int pontos_carta1 = 0, pontos_carta2 = 0;
    
    cadastrar_carta1();
    cadastrar_carta2();

    printf("\n=== MENU DE COMPARACAO - PRIMEIRO ATRIBUTO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("0 - Sair\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);
    limpar_buffer();

    if(opcao1 >= 1 && opcao1 <= 5) {
        printf("\n=== MENU DE COMPARACAO - SEGUNDO ATRIBUTO ===\n");
        if(opcao1 != 1) printf("1 - Populacao\n");
        if(opcao1 != 2) printf("2 - Area\n");
        if(opcao1 != 3) printf("3 - PIB\n");
        if(opcao1 != 4) printf("4 - Pontos Turisticos\n");
        if(opcao1 != 5) printf("5 - Densidade Demografica\n");
        printf("0 - Sair\n");
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        limpar_buffer();

        if(opcao2 == opcao1) {
            printf("\nERRO: Voce nao pode escolher o mesmo atributo duas vezes!\n");
            return 1;
        }

    // Comparação do primeiro atributo
    switch(opcao1) {
        case 1:
            printf("\n--- Comparando Populacao (1o atributo) ---\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            
            if(populacao1 > populacao2) {
                printf("Vencedor do 1o atributo: %s\n", cidade1);
                pontos_carta1++;
                soma_carta1 += populacao1;
                soma_carta2 += populacao2;
            } else if(populacao2 > populacao1) {
                printf("Vencedor do 1o atributo: %s\n", cidade2);
                pontos_carta2++;
                soma_carta1 += populacao1;
                soma_carta2 += populacao2;
            } else {
                printf("EMPATE no 1o atributo!\n");
                soma_carta1 += populacao1;
                soma_carta2 += populacao2;
            }
            break;
            
        case 2:
            printf("\n--- Comparando Area (1o atributo) ---\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);
            
            if(area1 > area2) {
                printf("Vencedor do 1o atributo: %s\n", cidade1);
                pontos_carta1++;
                soma_carta1 += area1;
                soma_carta2 += area2;
            } else if(area2 > area1) {
                printf("Vencedor do 1o atributo: %s\n", cidade2);
                pontos_carta2++;
                soma_carta1 += area1;
                soma_carta2 += area2;
            } else {
                printf("EMPATE no 1o atributo!\n");
                soma_carta1 += area1;
                soma_carta2 += area2;
            }
            break;
            
        case 3:
            printf("\n--- Comparando PIB (1o atributo) ---\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            
            if(pib1 > pib2) {
                printf("Vencedor do 1o atributo: %s\n", cidade1);
                pontos_carta1++;
                soma_carta1 += pib1;
                soma_carta2 += pib2;
            } else if(pib2 > pib1) {
                printf("Vencedor do 1o atributo: %s\n", cidade2);
                pontos_carta2++;
                soma_carta1 += pib1;
                soma_carta2 += pib2;
            } else {
                printf("EMPATE no 1o atributo!\n");
                soma_carta1 += pib1;
                soma_carta2 += pib2;
            }
            break;
            
        case 4:
            printf("\n--- Comparando Pontos Turisticos (1o atributo) ---\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedor do 1o atributo: %s\n", cidade1);
                pontos_carta1++;
                soma_carta1 += pontos_turisticos1;
                soma_carta2 += pontos_turisticos2;
            } else if(pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedor do 1o atributo: %s\n", cidade2);
                pontos_carta2++;
                soma_carta1 += pontos_turisticos1;
                soma_carta2 += pontos_turisticos2;
            } else {
                printf("EMPATE no 1o atributo!\n");
                soma_carta1 += pontos_turisticos1;
                soma_carta2 += pontos_turisticos2;
            }
            break;
            
        case 5:
            printf("\n--- Comparando Densidade Demografica (1o atributo) ---\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);
            
            if(densidade1 < densidade2) {
                printf("Vencedor do 1o atributo: %s\n", cidade1);
                pontos_carta1++;
                soma_carta1 += densidade1;
                soma_carta2 += densidade2;
            } else if(densidade2 < densidade1) {
                printf("Vencedor do 1o atributo: %s\n", cidade2);
                pontos_carta2++;
                soma_carta1 += densidade1;
                soma_carta2 += densidade2;
            } else {
                printf("EMPATE no 1o atributo!\n");
                soma_carta1 += densidade1;
                soma_carta2 += densidade2;
            }
            break;
    }

    // Comparação do segundo atributo
    if(opcao2 >= 1 && opcao2 <= 5) {
        switch(opcao2) {
            case 1:
                printf("\n--- Comparando Populacao (2o atributo) ---\n");
                printf("%s: %d habitantes\n", cidade1, populacao1);
                printf("%s: %d habitantes\n", cidade2, populacao2);
                
                if(populacao1 > populacao2) {
                    printf("Vencedor do 2o atributo: %s\n", cidade1);
                    pontos_carta1++;
                    soma_carta1 += populacao1;
                    soma_carta2 += populacao2;
                } else if(populacao2 > populacao1) {
                    printf("Vencedor do 2o atributo: %s\n", cidade2);
                    pontos_carta2++;
                    soma_carta1 += populacao1;
                    soma_carta2 += populacao2;
                } else {
                    printf("EMPATE no 2o atributo!\n");
                    soma_carta1 += populacao1;
                    soma_carta2 += populacao2;
                }
                break;
                
            case 2:
                printf("\n--- Comparando Area (2o atributo) ---\n");
                printf("%s: %.2f km2\n", cidade1, area1);
                printf("%s: %.2f km2\n", cidade2, area2);
                
                if(area1 > area2) {
                    printf("Vencedor do 2o atributo: %s\n", cidade1);
                    pontos_carta1++;
                    soma_carta1 += area1;
                    soma_carta2 += area2;
                } else if(area2 > area1) {
                    printf("Vencedor do 2o atributo: %s\n", cidade2);
                    pontos_carta2++;
                    soma_carta1 += area1;
                    soma_carta2 += area2;
                } else {
                    printf("EMPATE no 2o atributo!\n");
                    soma_carta1 += area1;
                    soma_carta2 += area2;
                }
                break;
                
            case 3:
                printf("\n--- Comparando PIB (2o atributo) ---\n");
                printf("%s: %.2f\n", cidade1, pib1);
                printf("%s: %.2f\n", cidade2, pib2);
                
                if(pib1 > pib2) {
                    printf("Vencedor do 2o atributo: %s\n", cidade1);
                    pontos_carta1++;
                    soma_carta1 += pib1;
                    soma_carta2 += pib2;
                } else if(pib2 > pib1) {
                    printf("Vencedor do 2o atributo: %s\n", cidade2);
                    pontos_carta2++;
                    soma_carta1 += pib1;
                    soma_carta2 += pib2;
                } else {
                    printf("EMPATE no 2o atributo!\n");
                    soma_carta1 += pib1;
                    soma_carta2 += pib2;
                }
                break;
                
            case 4:
                printf("\n--- Comparando Pontos Turisticos (2o atributo) ---\n");
                printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
                printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
                
                if(pontos_turisticos1 > pontos_turisticos2) {
                    printf("Vencedor do 2o atributo: %s\n", cidade1);
                    pontos_carta1++;
                    soma_carta1 += pontos_turisticos1;
                    soma_carta2 += pontos_turisticos2;
                } else if(pontos_turisticos2 > pontos_turisticos1) {
                    printf("Vencedor do 2o atributo: %s\n", cidade2);
                    pontos_carta2++;
                    soma_carta1 += pontos_turisticos1;
                    soma_carta2 += pontos_turisticos2;
                } else {
                    printf("EMPATE no 2o atributo!\n");
                    soma_carta1 += pontos_turisticos1;
                    soma_carta2 += pontos_turisticos2;
                }
                break;
                
            case 5:
                printf("\n--- Comparando Densidade Demografica (2o atributo) ---\n");
                printf("%s: %.2f hab/km2\n", cidade1, densidade1);
                printf("%s: %.2f hab/km2\n", cidade2, densidade2);
                
                if(densidade1 < densidade2) {
                    printf("Vencedor do 2o atributo: %s\n", cidade1);
                    pontos_carta1++;
                    soma_carta1 += densidade1;
                    soma_carta2 += densidade2;
                } else if(densidade2 < densidade1) {
                    printf("Vencedor do 2o atributo: %s\n", cidade2);
                    pontos_carta2++;
                    soma_carta1 += densidade1;
                    soma_carta2 += densidade2;
                } else {
                    printf("EMPATE no 2o atributo!\n");
                    soma_carta1 += densidade1;
                    soma_carta2 += densidade2;
                }
                break;
        }

        // Resultado final
        printf("\n=== RESULTADO FINAL ===\n");
        printf("Pontos de %s: %d\n", cidade1, pontos_carta1);
        printf("Pontos de %s: %d\n", cidade2, pontos_carta2);
        printf("Soma dos atributos de %s: %.2f\n", cidade1, soma_carta1);
        printf("Soma dos atributos de %s: %.2f\n", cidade2, soma_carta2);

        if(pontos_carta1 > pontos_carta2) {
            printf("\nVENCEDOR FINAL: %s\n", cidade1);
        } else if(pontos_carta2 > pontos_carta1) {
            printf("\nVENCEDOR FINAL: %s\n", cidade2);
        } else {
            if(soma_carta1 > soma_carta2) {
                printf("\nVENCEDOR FINAL (por soma de atributos): %s\n", cidade1);
            } else if(soma_carta2 > soma_carta1) {
                printf("\nVENCEDOR FINAL (por soma de atributos): %s\n", cidade2);
            } else {
                printf("\nEMPATE FINAL!\n");
            }
        }
    }
    
    return 0;
}


