#include <stdio.h>

 //Desafio: Novato - Super Trunfo

int main(){

  // CARTA 1 

    char estado[50];
    char cidade[50];
    char codigocarta[50];
    int populacao;
    int numpontosturisticos; //numero de pontos turisticos
    float areakm2;
    float pib;
    float densidadepopulacional;
    float pibpercapita;

    
    printf("DIGITE O ESTADO:\n");
    scanf("%s", estado);

    printf("DIGITE A CIDADE:\n");
    scanf("%s", cidade);

    printf("DIGITE O CODIGO DA CARTA:\n");
    scanf("%s", codigocarta);  
    
    printf("DIGITE A POPULACAO:\n");
    scanf("%d", &populacao);

    printf("DIGITE A AREA KM2:\n");
    scanf("%f", &areakm2);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &numpontosturisticos);

    printf("DIGITE O PIB:\n");
    scanf("%f", &pib);

     //calculo da densidade populacional
    float resultadodensidadepopulacional = populacao/areakm2;

    //calculo do pib per capita
    float resultadopibpercapita = populacao/pib;

    

printf("\n-------\n\n");


  // CARTA 2

    char estado2[50];
    char codigocarta2[50];
    char cidade2[50];
    int populacao2;
    int numpontosturisticos2; //numero de pontos turisticos
    float areakm22;
    float pib2;
    float densidadepopulacional2;
    float pibpercapita2;

    printf("DIGITE O ESTADO:\n");
    scanf("%s", estado2);

    printf("DIGITE A CIDADE:\n");
    scanf("%s", cidade2);

    printf("DIGITE O CODIGO DA CARTA:\n");
    scanf("%s", codigocarta2);

    printf("DIGITE A POPULACAO:\n");
    scanf("%d", &populacao2);

    printf("DIGITE A AREA KM2:\n");
    scanf("%f", &areakm22);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &numpontosturisticos2);

    printf("DIGITE O PIB:\n");
    scanf("%f", &pib2);

     //calculo da densidade populacional carta 2
    float resultado2densidadepopulacional2 = populacao2/areakm22;

    //calculo do pib per capita carta 2
    float resultado2pibpercapita2 = populacao2/pib2;

   



    printf("\n-------\n\n");

    printf("CARTA 1\n");
    printf("ESTADO: %s\n",estado);
    printf("CIDADE: %s\n",  cidade);
    printf("CODIGO DA CARTA: %s\n", codigocarta);
    printf("POPULACAO: %d\n", populacao);
    printf("AREA KM2: %.2f\n", areakm2);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", numpontosturisticos);
    printf("PIB:%f\n", pib);
    printf("DENSIDADE POPULACIONAL: %f\n", resultadodensidadepopulacional);
    printf("PIB PER CAPITA: %f\n", resultadopibpercapita);

    printf("\n-------\n\n");

    printf("CARTA 2\n");
    printf("ESTADO: %s\n", estado2);
    printf("CIDADE: %s\n", cidade2);
    printf("CODIGO DA CARTA: %s\n", codigocarta2);
    printf("POPULACAO: %d\n", populacao2);
    printf("AREA KM2: %.2f\n", areakm22);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", numpontosturisticos2);
    printf("PIB: %f\n", pib2);
    printf("DENSIDADE POPULACIONAL: %f\n", resultado2densidadepopulacional2);
    printf("PIB PER CAPITA: %f\n", resultado2pibpercapita2);


return 0;

}