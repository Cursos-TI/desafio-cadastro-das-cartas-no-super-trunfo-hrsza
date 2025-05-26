#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Para armazenar o código da carta (ex: A01)
    char cidade1[50]; // Para armazenar o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Leitura dos dados da primeira carta
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", cidade1); // Lê até a nova linha
    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4]; // Para armazenar o código da carta (ex: B02)
    char cidade2[50]; // Para armazenar o nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", cidade2); // Lê até a nova linha
    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}



















































































