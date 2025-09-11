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