#include <stdio.h>

// Desafio Super Trunfo - Países
// Início do código

int main() {
    printf ("\nDesafio Super Trunfo - Países \n\n");
    printf("____________________________\n\n");

    // Declaração de variáveis do jogo
    //PRIMEIRA CIDADE

    char estadoA[32];
    char nomeCidadeA[50];
    int numCidadeA;
    unsigned long int populacaoA;
    float areaA;
    float pibA;
    int pontosTurA;
    // nivel aventureiro
    float densidadeA;
    float pibPerCapitaA;
    float SuperPoderA;

    //SEGUNDA CIDADE
    char estadoB[32];
    char nomeCidadeB[50];
    int numCidadeB;
    unsigned long int populacaoB;
    float areaB;
    float pibB;
    int pontosTurB;
    // nivel aventureiro
    float densidadeB;
    float pibPerCapitaB;
    float SuperPoderB;

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

        densidadeA = (float) populacaoA / areaA;

        pibPerCapitaA = (float)(pibA / populacaoA);

        SuperPoderA = (float) (populacaoA + areaA + pibA + pontosTurA + pibPerCapitaA - densidadeA);

    
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

        densidadeB = (float)populacaoB / areaB;

        pibPerCapitaB = (float)(pibB / populacaoB);

        SuperPoderB = (float)(populacaoB + areaB + pibB + pontosTurB + pibPerCapitaB - densidadeB);

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

            printf("\n\n\n##### PRIMEIRA CARTA CADASTRADA #####\n");
            
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

            // Exibe confirmação de cadastro e os valores inseridos para cada atributo da SEGUNDA CIDADE, um por linha.

            printf("\n\n\n##### SEGUNDA CARTA CADASTRADA #####\n");
            
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



    // Comparação de Cartas
    printf("\n\n##### COMPARAÇÃO DE CARTAS #####\n");
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