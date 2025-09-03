#include <stdio.h>

// Nivel Novato
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

    // Dados da Carta 2
    char codigo1[4];
    char estado1;
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

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
    scanf("%f", &pib1);
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

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
