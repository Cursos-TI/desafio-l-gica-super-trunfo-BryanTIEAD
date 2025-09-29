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

    // Menu dinâmico - o segundo não pode ser igual ao primeiro
    printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n");
    switch (escolha1) {
        case 1:
            printf("2 - Defesa3 - Recuo4 - Densidade Demografica\n");
            break;
        case 2:
            printf("1 - Ataque3 - Recuo4 - Densidade Demografica\n");
            break;
        case 3:
            printf("1 - Ataque2 - Defesa4 - Densidade Demografica\n");
            break;
        case 4:
            printf("1 - Ataque2 - Defesa3 - Recuo\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }
    scanf("%d", &escolha2);

    // Garantir que não seja repetido
    if (escolha1 == escolha2) {
        printf("Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    printf("=== RESULTADO DA COMPARACAO ===\n");