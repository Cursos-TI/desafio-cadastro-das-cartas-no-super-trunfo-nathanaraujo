#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("Desafio Super Trunfo - Países \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[32];
    char nomeCidade[50];
    int numCidade;
    int populacao;
    float area;
    double pib;
    int pontosTur;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Qual é o nome da cidade?\n");
    scanf("%[^\n]", &nomeCidade);
    /*
    não funcionou porque não lê espaços
    scanf("%s", &nomeCidade);
    */

    printf("Qual é o estado? (A-H)\n");
    scanf("%s", estado);
   
    printf("Qual é o codigo da cidade? (01-04)\n");
    scanf("%d", &numCidade);

    printf("Qual é a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual é a área da cidade? (km²)\n");
    scanf("%f", &area);

    printf("Qual é o PIB da cidade (em milhões de reais)\n");
    scanf("%lf", &pib);

    printf("Quantos pontos turísticos têm na cidade?\n");
    scanf("%d", &pontosTur);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de form
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n\n##### CARTA CADASTRADA #####\n");
    
    printf("____________________________\n\n");
    printf("%s • %s0%d\n\n", nomeCidade, estado, numCidade);
    //printf("\nCÓDIGO DA CIDADE - %s0%d\n", estado, numCidade);
    printf("POPULAÇÃO - %d pessoas\n", populacao);
    printf("ÁREA - %.2f km²\n", area);
    printf("PIB - %.2lf milhões de reais\n", pib);
    printf("PONTOS TURÍSTICO - %d\n", pontosTur);
    printf("____________________________\n\n");

    return 0;
}