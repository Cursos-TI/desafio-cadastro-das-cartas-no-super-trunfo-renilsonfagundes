#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Renilson

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Variáveis da primeira carta
    int codigo1;
    char nome1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da segunda carta
    int codigo2;
    char nome2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Digite o código da cidade 1: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome1); 

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("Digite o código da cidade 2: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome2); 

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular densidade populacional e PIB per capita
    float densidade1 = calcularDensidadePopulacional(populacao1, area1);
    float densidade2 = calcularDensidadePopulacional(populacao2, area2);
    float pib_per_capita1 = calcularPibPerCapita(pib1, populacao1);
    float pib_per_capita2 = calcularPibPerCapita(pib2, populacao2);

    // Exibir os dados das cartas
    printf("\nInformações da cidade 1:\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f bilhões/habitante\n", pib_per_capita1);

    printf("\nInformações da cidade 2:\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f bilhões/habitante\n", pib_per_capita2);

    // Comparação do atributo escolhido (por exemplo, população)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", nome1, populacao1);
    printf("Carta 2 - %s: %d\n", nome2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}