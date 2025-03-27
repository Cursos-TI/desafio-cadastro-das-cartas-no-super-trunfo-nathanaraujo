#include <stdio.h>

// Desafio Super Trunfo - Países
// Início do código

int main() {
    printf ("\nDesafio Super Trunfo - Países \n");
    printf("\n*******************************\n");

    // Declaração de variáveis do jogo
    //PRIMEIRA CIDADE

    char estadoA[32] = "A";
    char nomeCidadeA[50] = "Belo Horizonte";
    int numCidadeA = 01;
    unsigned long int populacaoA = 2315560;
    float areaA = 331.354;
    float pibA = 105829.675;
    int pontosTurA = 250;
    // nivel aventureiro
    float densidadeA;
    float pibPerCapitaA;
    float SuperPoderA;

    //SEGUNDA CIDADE
    char estadoB[32] = "A";
    char nomeCidadeB[50] = "Uberlândia";
    int numCidadeB = 02;
    unsigned long int populacaoB = 754954;
    float areaB = 4115.206;
    float pibB = 43129.284;
    int pontosTurB = 85;
    // nivel aventureiro
    float densidadeB;
    float pibPerCapitaB;
    float SuperPoderB;

    densidadeA = (float) populacaoA / areaA;
    pibPerCapitaA = (float)((pibA*1000000) / populacaoA);
    SuperPoderA = (float) (populacaoA + areaA + pibA + pontosTurA + pibPerCapitaA - densidadeA);

    densidadeB = (float)populacaoB / areaB;
    pibPerCapitaB = (float)((pibB*1000000) / populacaoB);
    SuperPoderB = (float)(populacaoB + areaB + pibB + pontosTurB + pibPerCapitaB - densidadeB);

/*
    // Cadastro das Cartas
        // Solicita ao usuário que insira as informações DA PRIMEIRA CIDADE.

        printf("PRIMEIRA CIDADE\n\n");
        printf("Qual é o nome da cidade?\n");
        scanf(" %[^\n]", nomeCidadeA);
    
        printf("Qual é o estado? (A-H)\n");
        scanf("%s", estadoA);
    
        printf("Qual é o codigo da cidade? (01-04)\n");
        scanf("%d", &numCidadeA);

        printf("Qual é a população da cidade?\n");
        scanf("%u", &populacaoA);

        printf("Qual é a área da cidade? (km²)\n");
        scanf("%f", &areaA);

        printf("Qual é o PIB da cidade?\n");
        scanf("%f", &pibA);

        printf("Quantos pontos turísticos têm na cidade?\n");
        scanf("%d", &pontosTurA);


    
    // SEGUNDA CIDADE

    // Cadastro das Cartas
        // Solicita ao usuário que insira as informações DA SEGUNDA CIDADE.

        printf("\n\nSEGUNDA CIDADE\n\n");
        printf("Qual é o nome da cidade?\n");
        scanf(" %[^\n]", nomeCidadeB);

        printf("Qual é o estado? (A-H)\n");
        scanf("%s", estadoB);

        printf("Qual é o codigo da cidade? (01-04)\n");
        scanf("%d", &numCidadeB);

        printf("Qual é a população da cidade?\n");
        scanf("%u", &populacaoB);

        printf("Qual é a área da cidade? (km²)\n");
        scanf("%f", &areaB);

        printf("Qual é o PIB da cidade? (milhões de reais)\n");
        scanf("%f", &pibB);

        printf("Quantos pontos turísticos têm na cidade?\n");
        scanf("%d", &pontosTurB);


*/
        // Comparação de Cartas
            // Compara os valores inseridos para cada atributo da PRIMEIRA CIDADE com os valores inseridos para cada atributo da SEGUNDA CIDADE.
            
            int CompPopulacao = (unsigned long int) populacaoA > populacaoB;
            int CompArea = (float) areaA > areaB;
            int CompPib = (float) pibA > pibB;
            int CompPontosTur = pontosTurA > pontosTurB;areaA;
            int CompDensidade = (float) densidadeA > densidadeB;
            int CompPibPerCapita = (float) pibPerCapitaA > pibPerCapitaB;
            int CompSuperPoder = (float) SuperPoderA > SuperPoderB;
    

    // Exibição dos Dados das Cartas:
            // Exibe confirmação de cadastro e os valores inseridos para cada atributo da PRIMEIRA CIDADE, um por linha.

            printf("\n\n##### PRIMEIRA CARTA CADASTRADA #####\n");
            
            printf("____________________________\n\n");
            printf("%s • %s0%d\n\n", nomeCidadeA, estadoA, numCidadeA);
            printf("POPULAÇÃO - %u pessoas\n", populacaoA);
            printf("ÁREA - %.1f km²\n", areaA);
            printf("PIB - %.2f milhões de reais\n", pibA);
            printf("PONTOS TURÍSTICO - %d\n", pontosTurA);
            printf("DENSIDADE POPULACIONAL - %.2f habitantes/km²\n", densidadeA);
            printf("PIB PER CAPITA - R$%.2f\n", pibPerCapitaA);
            printf("____________________________\n\n");
            printf("SUPER PODER - %.2f\n", SuperPoderA);
            printf("\n============================\n");

            // Exibe confirmação de cadastro e os valores inseridos para cada atributo da SEGUNDA CIDADE, um por linha.

            printf("\n\n##### SEGUNDA CARTA CADASTRADA #####\n");
            
            printf("____________________________\n\n");
            printf("%s • %s0%d\n\n", nomeCidadeB, estadoB, numCidadeB);
            printf("POPULAÇÃO - %u pessoas\n", populacaoB);
            printf("ÁREA - %.3f km²\n", areaB);
            printf("PIB - %.2f milhões de reais\n", pibB);
            printf("PONTOS TURÍSTICO - %d\n", pontosTurB);
            printf("DENSIDADE POPULACIONAL - %.2f habitantes/km²\n", densidadeB);
            printf("PIB PER CAPITA - R$%.2f\n", pibPerCapitaB);
            printf("____________________________\n\n");
            printf("SUPER PODER - %.2f\n", SuperPoderB);
            printf("\n============================\n");



    // Comparação de Cartas
    printf("\n##### COMPARAÇÃO DE CARTAS #####");
    printf("____________________________\n\n");
    printf("População: PRIMEIRA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompPopulacao);
    printf("Área: PRIMEIRA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompArea);
    printf("PIB: PRIMEIRA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompPib);
    printf("Pontos Turísticos: PRIMEIRA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompPontosTur);
    printf("Densidade Populacional: SEGUNDA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompDensidade);
    printf("PIB per Capita: PRIMEIRA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompPibPerCapita);
    printf("Super Poder: PRIMEIRA CARTA venceu? %d (1 • SIM | 0 • NÃO)\n", CompSuperPoder);
    printf("____________________________\n\n");



    return 0;

}