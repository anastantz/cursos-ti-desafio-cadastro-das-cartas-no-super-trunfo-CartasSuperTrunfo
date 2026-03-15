#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declarando variáveis da carta 1
    char codigo1[4], nome1[50];
    int populacao1, ptsTuristicos1;
    float pib1, area1;

    // Declarando variáveis da carta 2
    char codigo2[4], nome2[50];
    int populacao2, ptsTuristicos2;
    float pib2, area2;

    // Tela de boas vindas
    printf("\n=====* SUPER TRUNFO: PAÍSES - CADASTRO DE CARTAS DE CIDADES *=====\n");
    printf("\nOla, player! Bem-vindo (a) ao Sistema de Cadastro de Cartas. Aqui voce pode cadastrar e conferir as informacoes das cartas de cidades. Vamos la!\n");

    // Cadastro da Carta 1
    printf("\nInsira os dados da Carta 1:\n");
    printf("Codigo da cidade:\n");
    scanf("%s", codigo1);

    printf("Nome da cidade:\n");
    scanf("%s", nome1);

    printf("Populacao:\n");
    scanf("%d", &populacao1);

    printf("Area (km2):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &ptsTuristicos1);

    // Cadastro da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Codigo da cidade:\n");
    scanf("%s", codigo2);

    printf("Nome da cidade:\n");
    scanf("%s", nome2);

    printf("Populacao:\n");
    scanf("%d", &populacao2);

    printf("Area (km2):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &ptsTuristicos2);

    // Exibição dos Dados das Cartas
    printf("\n=====* CARTAS CADASTRADAS *=====\n");

    printf("\nConfira os dados da Carta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", ptsTuristicos1);

    printf("\nConfira os dados da Carta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", ptsTuristicos2);

    printf("\nObrigado por usar o Sistema de Cadastro de Cartas!\n");
    printf("\nSuas cartas foram registradas e o programa sera encerrado.\n");
    printf("\nAte a proxima!\n");

    return 0;
}