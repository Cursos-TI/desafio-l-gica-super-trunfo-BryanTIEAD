#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado1, resultado2;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2, densidade1, densidade2;
    int soma1 = 0, soma2 = 0;
    int escolha1, escolha2;
        srand(time(0));

    // Atributos das cartas
    ataque1 = rand() % 100 + 1;
    ataque2 = rand() % 100 + 1;
    defesa1 = rand() % 100 + 1;
    defesa2 = rand() % 100 + 1;
    recuo1 = rand() % 100 + 1;
    recuo2 = rand() % 100 + 1;
    densidade1 = rand() % 100 + 1;
    densidade2 = rand() % 100 + 1;

    printf("=== SUPER TRUNFO ===\n");
    printf("Carta 1 (Brasil)\n");
    printf("Ataque: %d | Defesa: %d | Recuo: %d | Densidade: %d\n", ataque1, defesa1, recuo1, densidade1);
    printf("Carta 2 (Argentina)\n");
    printf("Ataque: %d | Defesa: %d | Recuo: %d | Densidade: %d\n", ataque2, defesa2, recuo2, densidade2);

    // Menu interativo - escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Ataque\n");
    printf("2 - Defesa\n");
    printf("3 - Recuo\n");
    printf("4 - Densidade Demografica\n");
    scanf("%d", &escolha1);