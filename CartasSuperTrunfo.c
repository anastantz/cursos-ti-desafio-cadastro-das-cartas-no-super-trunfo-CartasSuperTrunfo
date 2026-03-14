#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declarando variáveis da carta 1
    char codigo1[4], nome1[50];
    int populacao1, ptsTuristicos1;
    float pib1, area1;

    //Declarando variáveis da carta 2
    char codigo2[4], nome2[50];
    int populacao2, ptsTuristicos2;
    float pib2, area2;
    
    //Tela de boas vindas
    printf(" =* Super Trunfo: Paises - Cadastro de Cartas de Cidades *= \n");
printf("\n");
printf("Ola, player! Bem-vindo (a) ao Sistema de Cadastro de Cartas. Aqui voce pode cadastrar e conferir as informacoes das cartas de cidades. Vamos la! \n");
printf("\n");

    //Cadastro da Carta 1:
    printf("Insira os dados da Carta 1: \n ");
    printf("Código da cidade: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &ptsTuristicos1);
    
//Cadastro da Carta 2:
printf("Insira os dados da Carta 2: \n");
    printf("Codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &ptsTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
