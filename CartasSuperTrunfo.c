#include <stdio.h>

// Nivel Novato
//aplicando o nivel Aventureiro
// Principal
int main() {
 
    //Declaração de Variaveis
    char codigo[4];
    char estado;
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;

    // Dados da Carta 2
    char codigo1[4];
    char estado1;
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_capita1;

    // Cadastro da Carta 1
    printf("Carta 1:\n ");
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);
    estado1 = codigo1[0]; // extrai a letra do estado
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);
  
    // Cadastro da Carta 2
    printf("\nCarta 2:\n");
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo1);
    estado1 = codigo1[0];
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

     //Calculo Densidade e PIB per Capita

    densidade_populacional = (float) populacao / area;
    PIB_per_capita = (float) pib / populacao;
    densidade_populacional1 = (float) populacao1 / area1;
    PIB_per_capita1 = (float) pib1 / populacao1;

    // Exibição dos Dados das Cartas:
    // Exibição formatada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
     printf("PIB Per Capital: %.2f reais\n", PIB_per_capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
     printf("PIB Per Capital: %.2f reais\n", PIB_per_capita1);

    return 0;
}
