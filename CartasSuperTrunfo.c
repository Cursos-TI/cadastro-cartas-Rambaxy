#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* Objetivo: No nível novato você deve criar as cartas representando as cidades 
utilizando scanf para entrada de dados e printf para exibir as informações.*/

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

// Área para entrada de dados
   
// Variáveis carta 1
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[50] = "Sao Paulo" ;
    unsigned long int populacao1 = 12325000;
    int turismo1 = 50;
    float area1 = 1521.11 ;
    float pib1 = 699.28 ;


// Variáveis carta 2//
    char estado2 = 'B';
    char codigo2[10] = "B02";
    char cidade2[50] = "Rio de Janeiro" ;
    unsigned long int populacao2 = 6748000;
    int turismo2 = 30;
    float area2 = 1200.25;
    float pib2 = 300.50;

// Desafio aventureiro: calcular a densidade e o pib per capta para exibir nas cartas;
   float densidade1 = populacao1 / area1; 
   float pibper1 = (pib1 * 1000000000) / populacao1;

//definindo os valores do inverso populacional em variáveis;
    float inverso1 = 1 / densidade1;

//Variável de SuperPoder carta A;
    float superpoder1 = populacao1 + turismo1 + area1 + pib1 + inverso1 + pibper1;


// Área para exibição dos dados da cidade
// Carta 1//

    printf("*** CARTA 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Numeros de pontos turisticos: %d\n", turismo1);
    printf("Area: %.2f Km\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibper1);
    printf("SUPERPODER: %.0f\n\n", superpoder1);


// Desafio aventureiro: calcular a densidade e o pib per capta para exibir nas cartas;
    float densidade2 = populacao2 / area2;
    float pibper2 = (pib2 * 1000000000) / populacao2;

    //definindo os valores do inverso populacional em variáveis;
    float inverso2 = 1 / densidade2;

//Variável de SuperPoder carta B; 
        float superpoder2 = populacao2 + turismo2 + area2 + pib2 + inverso2 + pibper2; 

    // Carta 2//
    printf("*** CARTA 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populacao: %lu\n", populacao2);
    printf("Numeros de pontos turisticos: %d\n", turismo2);
    printf("Area: %.2f Km\n", area2);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibper2);
    printf("SUPERPODER: %.0f\n\n", superpoder2);


         printf("*** COMPARACAO DAS CARTAS ***\n\n");
        printf("Obs: 1 para verdadeiro e 0 para falso\n\n");

    //Definindo as variáveis 
            printf("Insira a populacao da carta %c:", estado1);
            scanf("%lu", &populacao1);
            printf("Populacao: Carta %c venceu?: %d\n\n", estado1, populacao1 > populacao2);

            printf("Insira a Area da carta %c:", estado1);
            scanf("%f", &area1);
            printf("Area: Carta %c venceu?: %d\n\n", estado1, area1 > area2);

            printf("Insira o PIB da carta %c:", estado1);
            scanf("%f", &pib1);
            printf("PIB: Carta %c venceu?: %d\n\n", estado1, pib1 > pib2);

            printf("Insira o numero de pontos turisticos da carta %c:", estado1);
            scanf("%d", &turismo1);
            printf("Pontos turisticos: Carta %c venceu?: %d\n\n", estado1, turismo1 > turismo2);

            printf("Insira a densidade populacional da carta %c:", estado2);
            scanf("%f", &densidade1);
            printf("Densidade populacional: Carta %c venceu?: %d\n\n", estado2, inverso1 > inverso2);

            printf("Insira o PIB per Capita da carta %c:", estado1);
            scanf("%f", &pibper1);
            printf("PIB per Capita: Carta %c venceu?: %d\n\n", estado1, pibper1 > pibper2);

            printf("Insira o SUPERPODER da carta %c:", estado1);
            scanf("%f", &superpoder1);
            printf("SUPERPODER: Carta %c venceu?: %d\n\n", estado1, superpoder1 > superpoder2);


    return 0;
}