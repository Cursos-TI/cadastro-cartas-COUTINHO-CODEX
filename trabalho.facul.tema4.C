/*
  trabalho.facul.tema4.C
  Simulação de movimentos de peças de xadrez (nível mestre)
/*
  trabalho.facul.tema4.C
  Desafio nível novato: movimentação de peças (uso de for, while e do-while)

  Requisitos:
  - Torre: simular 5 casas para a direita (usar for)
  - Bispo: simular 5 casas na diagonal cima+direita (usar while)
  - Rainha: simular 8 casas para a esquerda (usar do-while)
  - Os números de casas são definidos por constantes no código
  - Imprimir a direção a cada casa percorrida

  Código em português, simples e comentado para fácil entendimento.
*/

#include <stdio.h>

int main() {
	/* Definir quantidades de casas (entrada fixa no código) */
	const int TORRE_PASSOS = 5;    /* Torre: 5 casas para a direita */
	const int BISPO_PASSOS = 5;    /* Bispo: 5 casas na diagonal cima+direita */
	const int RAINHA_PASSOS = 8;   /* Rainha: 8 casas para a esquerda */

	printf("Simulacao de movimentos (nivel novato)\n");
	printf("Torre: %d casas para a direita (usando for)\n", TORRE_PASSOS);
	printf("Bispo: %d casas na diagonal (Cima, Direita) (usando while)\n", BISPO_PASSOS);
	printf("Rainha: %d casas para a esquerda (usando do-while)\n\n", RAINHA_PASSOS);

	/* --- Torre: usar for --- */
	printf("Torre movendo para a direita:\n");
	for (int i = 0; i < TORRE_PASSOS; i++) {
		/* A cada casa percorrida, imprimimos a direcao "Direita" */
		printf("%d: Direita\n", i + 1);
	}
	printf("\n");

	/* --- Bispo: usar while --- */
	printf("Bispo movendo na diagonal (Cima, Direita):\n");
	int conta = 0;
	while (conta < BISPO_PASSOS) {
		conta++;
		/* Para representar a diagonal, imprimimos duas direcoes juntas */
		printf("%d: Cima, Direita\n", conta);
	}
	printf("\n");

	/* --- Rainha: usar do-while --- */
	printf("Rainha movendo para a esquerda:\n");
	int passos = 0;
	if (RAINHA_PASSOS > 0) {
		do {
			passos++;
			printf("%d: Esquerda\n", passos);
		} while (passos < RAINHA_PASSOS);
	}

	printf("\nSimulacao concluida.\n");
	return 0;
}
