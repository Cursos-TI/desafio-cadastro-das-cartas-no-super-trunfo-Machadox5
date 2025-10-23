/*Lógica geral do programa

Ler os dados de duas cartas, com população do tipo unsigned long int.

Calcular:

Densidade populacional = População / Área

PIB per capita = PIB / População

Calcular o Super Poder:
SuperPoder = população + área + PIB + pontosTurísticos + PIBperCapita + (1 / densidadePopulacional)*/









#include <stdio.h>

int main() {
    // ===== Declaração das variáveis =====
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // ===== Leitura dos dados =====
    printf("Cadastro da Carta 1:\n");
    printf("Estado : ");
    scanf(" %c", &estado1);
    printf("Código : ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado : ");
    scanf(" %c", &estado2);
    printf("Código : ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos =====
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em bilhões → reais
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    float superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // ===== Exibição dos resultados =====
    printf("\n===== Dados Calculados =====\n");
    printf("Carta 1 - %s:\n", nomeCidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta 2 - %s:\n", nomeCidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // ===== Comparações =====
    printf("===== Comparação de Cartas =====\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

