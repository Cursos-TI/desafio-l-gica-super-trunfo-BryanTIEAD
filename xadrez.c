#include <stdio.h>

int main() {
    // ===== Dados iniciais das cartas =====
    char estado1[3] = "CE";
    char codigo1[5] = "C01";
    char nomeCidade1[50] = "Fortaleza";
    unsigned long int populacao1 = 2703391;
    float area1 = 314.93;
    float pib1 = 89.0;
    int pontosTuristicos1 = 40;

    char estado2[3] = "PA";
    char codigo2[5] = "P01";
    char nomeCidade2[50] = "Belem";
    unsigned long int populacao2 = 1506420;
    float area2 = 1059.46;
    float pib2 = 47.4;
    int pontosTuristicos2 = 30;

    // ===== Cálculos automáticos =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // ===== Exibição Carta 1 =====
    printf("=== Carta 1 ===\n");
    scanf("%*c");
    printf("Estado: %s\n", estado1);
    scanf("%*c");
    printf("Código: %s\n", codigo1);
    scanf("%*c");
    printf("Nome da cidade: %s\n", nomeCidade1);
    scanf("%*c");
    printf("População: %lu\n", populacao1);
    scanf("%*c");
    printf("Área: %.2f km²\n", area1);
    scanf("%*c");
    printf("PIB: %.2f bilhões de reais\n", pib1);
    scanf("%*c");
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    scanf("%*c");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    scanf("%*c");
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    scanf("%*c");
    printf("Super Poder: %.2f\n", superPoder1);
    scanf("%*c");

    // ===== Exibição Carta 2 =====
    printf("\n=== Carta 2 ===\n");
    scanf("%*c");
    printf("Estado: %s\n", estado2);
    scanf("%*c");
    printf("Código: %s\n", codigo2);
    scanf("%*c");
    printf("Nome da cidade: %s\n", nomeCidade2);
    scanf("%*c");
    printf("População: %lu\n", populacao2);
    scanf("%*c");
    printf("Área: %.2f km²\n", area2);
    scanf("%*c");
    printf("PIB: %.2f bilhões de reais\n", pib2);
    scanf("%*c");
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    scanf("%*c");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    scanf("%*c");
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    scanf("%*c");
    printf("Super Poder: %.2f\n", superPoder2);
    scanf("%*c");

    // ===== Comparações  =====
    printf("\n=== Comparações ===\n");

    if (populacao1 > populacao2)
    {
        printf("População: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else
        printf("População: Carta 2 (%s) venceu!\n", nomeCidade2);

    if (area1 > area2)
    {
        printf("Área: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else
        printf("Área: Carta 2 (%s) venceu!\n", nomeCidade2);

    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else
        printf("PIB: Carta 2 (%s) venceu!\n", nomeCidade2);

    if (pontosTuristicos1 > pontosTuristicos2)
    {
        printf("Pontos Turísticos: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else
        printf("Pontos Turísticos: Carta 2 (%s) venceu!\n", nomeCidade2);

    if (densidade1 < densidade2)
    {
        printf("Densidade Populacional: Carta 1 (%s) venceu!\n", nomeCidade1);
    }else
        printf("Densidade Populacional: Carta 2 (%s) venceu!\n", nomeCidade2);

    if (pibPerCapita1 > pibPerCapita2)
    {
        printf("PIB per Capita: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else
        printf("PIB per Capita: Carta 2 (%s) venceu!\n", nomeCidade2);

    if (superPoder1 > superPoder2)
    {
        printf("Super Poder: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else
        printf("Super Poder: Carta 2 (%s) venceu!\n", nomeCidade2);

    // ===== Menu Interativo =====
    int opcao;
    printf("\n=== Menu de Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparando População:\n%s: %lu\n%s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) 
              printf("Vencedora: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) 
              printf("Vencedora: %s\n", nomeCidade2);
            else 
             printf("Empate!\n");
        case 2:
            printf("\nComparando Área:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) 
             printf("Vencedora: %s\n", nomeCidade1);
            else if (area2 > area1) 
             printf("Vencedora: %s\n", nomeCidade2);
            else 
             printf("Empate!\n");
            break;

        case 3:
            printf("\nComparando PIB:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n%s: %d\n%s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("\nComparando Densidade Populacional (vence a menor):\n%s: %.2f\n%s: %.2f\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedora: %s\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 6:
            printf("\nComparando PIB per Capita:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 7:
            printf("\nComparando Super Poder:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, superPoder1, nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2) printf("Vencedora: %s\n", nomeCidade1);
            else if (superPoder2 > superPoder1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
