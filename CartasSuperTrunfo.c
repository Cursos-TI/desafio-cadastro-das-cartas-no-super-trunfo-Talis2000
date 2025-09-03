#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    //carta 1
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    char estado1;
   char codigo1[4];
   char cidade1[560];
   int populacao1;
   float area1;
   float pib1;
   int turisticos1;

   //carta 2
   char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado da carta 1: \n");
   scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", &codigo1);  

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &turisticos1);

    printf("Digite o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &turisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
            //CARTA 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f\n", populacao1 / area1);
    printf("pib per capita: %.2f\n", pib1 / populacao1);
    //CARTA 2
    printf("\n carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f\n", populacao2 / area2);
    printf("pib per capita: %.2f\n", pib2 / populacao2);
    return 0;
}
