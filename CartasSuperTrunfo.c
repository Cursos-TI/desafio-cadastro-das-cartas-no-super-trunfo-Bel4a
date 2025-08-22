#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade; // calculada no cadastro
} Carta;

int main() {
    // Duas cartas já cadastradas (pode trocar pelos dados que quiser)
    Carta carta1 = {"Brasil", 214000000, 8515767.0, 2200000.0, 15, 214000000 / 8515767.0};
    Carta carta2 = {"Argentina", 46000000, 2780400.0, 640000.0, 8, 46000000 / 2780400.0};

    int opcao;

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", carta1.nome, carta2.nome);

    switch(opcao) {
        case 1: // População
            printf("População %s: %d\n", carta1.nome, carta1.populacao);
            printf("População %s: %d\n", carta2.nome, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área %s: %.2f km²\n", carta1.nome, carta1.area);
            printf("Área %s: %.2f km²\n", carta2.nome, carta2.area);

            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB %s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("PIB %s: %.2f bilhões\n", carta2.nome, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos %s: %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("Pontos turísticos %s: %d\n", carta2.nome, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida: menor vence)
            printf("Densidade %s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
            printf("Densidade %s: %.2f hab/km²\n", carta2.nome, carta2.densidade);

            if (carta1.densidade < carta2.densidade) {
                printf("Vencedor: %s (menor densidade)\n", carta1.nome);
            } else if (carta1.densidade > carta2.densidade) {
                printf("Vencedor: %s (menor densidade)\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
    
}
