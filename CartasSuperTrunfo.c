#include <stdio.h>

int main(){
	
	char estado1[30];
	char estado2[30];
	char codigo1[30];
	char codigo2[30];
	char cidade1[30];
	char cidade2[30];
	int populacao1, populacao2;
	float area1, area2;
	float pib1, pib2;
	int pontoturistico1, pontoturistico2;
	
	
    printf("Digite estado da carta 1: \n");
	scanf("%s", estado1);
	printf("Digite estado da carta 2: \n");
	scanf("%s", estado2);
	
		
	printf("digite codigo da cidade carta1: \n");
	scanf("%s", codigo1); 
	printf("digite codigo da cidade carta2: \n");
	scanf("%s", codigo2);
	
	printf("Digite a Cidade da carta1: \n");
	scanf("%s", cidade1);
	printf("Digite a Cidade da carta2: \n");
	scanf("%s", cidade2);
	
	printf("Digite a quantidade de popoulacao da carta1: \n");
	scanf("%d", &populacao1);
	printf("Digite a quantidade de popoulacao da carta2: \n");
	scanf("%d", &populacao2);
	
	printf("Digite a Quantidade da Area Habitada da carta 1: \n");
	scanf("%f", &area1);
	printf("Digite a Quantidade da Area Habitada da carta 2: \n");
	scanf("%f", &area2);
	
	printf("Digite PIB da Cidade da carta 1: \n");
	scanf("%f", &pib1);
	printf("Digite PIB da Cidade da carta 2: \n");
	scanf("%f", &pib2);
	
	printf("Digite quantidade de pontos turistico da carta 1: \n");
	scanf("%d", &pontoturistico1);
	printf("Digite quantidade de pontos turistico da Carta 2: \n");
	scanf("%d", &pontoturistico2);
	
	printf("O Estado da carta1 %s - O Estado da carta2 %s - Codigo da cidade da carta1 %s - Codigo da cidade da carta2 %s - Cidade da carta1 %s - Cidade da carta2 %s - Quantidade da polulacao da carta1  %d - Quantidade da polulacao da carta2 %d - Quantida da area Habitada da Carta1 %.2f KM - Quantida da area Habitada da Carta2 %.2f KM - Valor do PIB Carta1 %.2f MILHOES - Valor do PIB Carta2 %.2f MILHOES - Quantidade de Ponto Turisco Carta1 %d - Quantidade de Ponto Turisco Carta2 %d ", estado1, estado2, codigo1, codigo2, cidade1, cidade2, populacao1, populacao2, area1, area2, pib1, pib2, pontoturistico1, pontoturistico2);

	return 0;
	
}