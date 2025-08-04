#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado: A ");
    scanf(" %c", &estado1);
    printf("Código da Carta:A01 ");
    scanf("%s", codigo1);
    printf("Nome da Cidade:Rio de Janeiro ");
    scanf("%[^\n]", nomeCidade1); // Lê string com espaços
    printf("População:40000 ");
    scanf("%d", &populacao1);
    printf("Área:900000 ");
    scanf("%f", &area1);
    printf("PIB:20000 ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:70 ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado:B ");
    scanf(" %c", &estado2);
    printf("Código da Carta:B02 ");
    scanf("%s", codigo2);
    printf("Nome da Cidade:Petropolis ");
    scanf(" %[^\n]", nomeCidade2); // Lê string com espaços
    printf("População: 3000 ");
    scanf("%d", &populacao2);
    printf("Área:40000 ");
    scanf("%f", &area2);
    printf("PIB:10000 ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:20 ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

