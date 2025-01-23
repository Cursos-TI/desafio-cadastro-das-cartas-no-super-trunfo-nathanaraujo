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
    char pais;
    int numCidade;
    int populacao;
    float area;
    double pib;
    int pontosTur;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Qual é o país? (A-H):\n");
    scanf("%c%", pais);

    printf("Qual é o codigo da cidade? (01-04):\n");
    scanf("%d", numCidade);

    printf("Qual é a população da cidade?:\n");
    scanf("%d", populacao);

    printf("Qual é a área da cidade? (km²):\n");
    scanf("%.1f", area);

    printf("Qual é o PIB da cidade (em bilhões de reais):\n");
    scanf("%.2f", pib);

    print("Quantos pontos turísticos têm na cidade?:\n");
    scanf("%d", pontosTur);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
