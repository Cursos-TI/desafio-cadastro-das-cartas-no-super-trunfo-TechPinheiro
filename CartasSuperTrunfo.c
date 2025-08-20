#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Ledanteque pinheiro filho 

int main() {
   
    // Dados da carta 1
    char estado1;
    char codigo1[5];      
    char cidade1[51]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[51];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    /*Armazenando dados da carta 1*/
            printf("Agora vamos cadastras os dados da carta 1\n");
   
printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

printf("Codigo da Carta (ex: A01 A02 ...): ");
    scanf("%4s", codigo1);

printf("Nome da Cidade: ");
    scanf(" %c", cidade1);

printf("Populacao: ");
    scanf("%d", &populacao1);

printf("Area (em km2): ");
    scanf("%f", &area1);

printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

            /*Armazenando dados da carta 2*/
            
                printf("\nInforme os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %c", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Imprimindo os dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    return 0;
}
