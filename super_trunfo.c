// super_trunfo.c - Nível avançado
#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char codigo[5];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

void calcularIndicadores(struct Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
}

void exibirCarta(struct Carta c) {
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nome);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.2f reais\n", c.pibPerCapita);
}

float obterValorPorIndice(struct Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        case 5: return c.densidade;
        case 6: return c.pibPerCapita;
        default: return 0;
    }
}

const char* nomeDoAtributo(int indice) {
    switch (indice) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per Capita";
        default: return "Inválido";
    }
}

int main() {
    struct Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.11, 699.28, 50};
    struct Carta carta2 = {"RJ", "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    int opcao1, opcao2;

    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) printf("%d - %s\n", i, nomeDoAtributo(i));
    }
    scanf("%d", &opcao2);

    float valor1_attr1 = obterValorPorIndice(carta1, opcao1);
    float valor2_attr1 = obterValorPorIndice(carta2, opcao1);
    float valor1_attr2 = obterValorPorIndice(carta1, opcao2);
    float valor2_attr2 = obterValorPorIndice(carta2, opcao2);

    // Inverter valor da densidade para fins de comparação
    float carta1_comp1 = (opcao1 == 5) ? -valor1_attr1 : valor1_attr1;
    float carta2_comp1 = (opcao1 == 5) ? -valor2_attr1 : valor2_attr1;

    float carta1_comp2 = (opcao2 == 5) ? -valor1_attr2 : valor1_attr2;
    float carta2_comp2 = (opcao2 == 5) ? -valor2_attr2 : valor2_attr2;

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1 - %s\n", carta1.nome);
    printf("%s: %.2f\n", nomeDoAtributo(opcao1), valor1_attr1);
    printf("%s: %.2f\n", nomeDoAtributo(opcao2), valor1_attr2);
    printf("Soma: %.2f\n\n", soma1);

    printf("Carta 2 - %s\n", carta2.nome);
    printf("%s: %.2f\n", nomeDoAtributo(opcao1), valor2_attr1);
    printf("%s: %.2f\n", nomeDoAtributo(opcao2), valor2_attr2);
    printf("Soma: %.2f\n\n", soma2);

    if (soma1 > soma2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}