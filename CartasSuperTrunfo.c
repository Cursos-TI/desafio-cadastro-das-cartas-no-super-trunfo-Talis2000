#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    unsigned long int turisticos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    unsigned long int turisticos2;

    // ===== ENTRADA DE DADOS =====
    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);  

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%lu", &turisticos1);

    printf("Digite o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%lu", &turisticos2);
    
    // ===== CÁLCULOS =====
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    float pibPerCapita1 = pib1 / (float) populacao1;
    float pibPerCapita2 = pib2 / (float) populacao2;

    float superPoder1 = (float) populacao1 + area1 + pib1 + turisticos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float) populacao2 + area2 + pib2 + turisticos2 + pibPerCapita2 + (1 / densidade2);

    // ===== EXIBIÇÃO DAS CARTAS =====
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %lu\n", turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %lu\n", turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // ===== COMPARAÇÕES =====
    int vitoriaPopulacao = populacao1 > populacao2;
    int vitoriaArea = area1 > area2;
    int vitoriaPib = pib1 > pib2;
    int vitoriaTuristicos = turisticos1 > turisticos2;
    int vitoriaDensidade = densidade1 < densidade2; // menor vence
    int vitoriaPibpercapita = pibPerCapita1 > pibPerCapita2;
    int vitoriaSuperpoder = superPoder1 > superPoder2;

    // ===== RESULTADOS =====
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", vitoriaPopulacao ? 1 : 2, vitoriaPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vitoriaArea ? 1 : 2, vitoriaArea);
    printf("PIB: Carta %d venceu (%d)\n", vitoriaPib ? 1 : 2, vitoriaPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitoriaTuristicos ? 1 : 2, vitoriaTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vitoriaDensidade ? 1 : 2, vitoriaDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vitoriaPibpercapita ? 1 : 2, vitoriaPibpercapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vitoriaSuperpoder ? 1 : 2, vitoriaSuperpoder);

    return 0;
}
