#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[50];
    char nome da cidade[50];
    char código da carta[03];
    int população;
    int números de pontos turisticos;
    float área km²;
    float pib;

  // Área para entrada de dados
   
  // CARTA 1:BAHIA
     printf("DIGITE O ESTADO:\n");
      scanf("%s",estado);

     printf("DIGITE O NOME DA CIDADE:\n");
      scanf("%s",nome da cidade);

     printf("DIGITE O CÓD DA CARTA:\n");
      scanf(%s",código da carta);

     printf("DIGITE A POPULAÇÃO:\n");
      scanf("%d",população);

     printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS:\n");
      scanf("%d",números de pontos turísticos); 

     printf("DIGITE A ÁREA EM KM²:\n");
      scanf("%3.f",aréa em km²);

     printf("DIGITE O PIB");
      scanf("%f",pib);
      
  // CARTA 2:CEARÁ
     printf("DIGITE O ESTADO:\n");
      scanf("%s",estado);

     printf("DIGITE O NOME DA CIDADE:\n");
      scanf("%s",nome da cidade);

     printf("DIGITE O CÓD DA CARTA:\n");
      scanf(%s",código da carta);

     printf("DIGITE A POPULAÇÃO:\n");
      scanf("%d",população);

     printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS:\n");
      scanf("%d",números de pontos turísticos); 

     printf("DIGITE A ÁREA EM KM²:\n");
      scanf("%3.f",aréa em km²);

     printf("DIGITE O PIB");
      scanf("%f",pib);

  // Área para exibição dos dados da cidade

  // CARTA 1:BAHIA
      printf("ESTADO: %s\n",estado);
      printf("NOME DA CIDADE: %s\n",nome da cidade);
      printf("CÓD DA CARTA: %s\n",código da carta);
      printf("POPULAÇÃO: %d\n",população);
      printf("NÚMEROS DE PONTOS TURÍSTICOS: %d\n",números de pontos turísticos);
      printf("ÁREA EM KM²: %.3f\n",área em km²);
      printf("PIB: %f\n",pib);


  // CARTA 1:CEARÁ
      printf("ESTADO: %s\n",estado);
      printf("NOME DA CIDADE: %s\n",nome da cidade);
      printf("CÓD DA CARTA: %s\n",código da carta);
      printf("POPULAÇÃO: %d\n",população);
      printf("NÚMEROS DE PONTOS TURÍSTICOS: %d\n",números de pontos turísticos);
      printf("ÁREA EM KM²: %.3f\n",área em km²);
      printf("PIB: %f\n",pib);    

return 0;
} 
