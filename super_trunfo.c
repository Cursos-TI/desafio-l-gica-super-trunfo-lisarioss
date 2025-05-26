#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programa Super Trunfo com Menu Interativo

int main() {
    // Declaração das variáveis para Carta 1
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para Carta 2
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Variáveis calculadas
    float densidade1, densidade2;

    // Entrada dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do País: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do País: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    int opcao;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("%s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("%s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("%s venceu!\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("%s venceu! (menor densidade vence)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("%s venceu! (menor densidade vence)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}