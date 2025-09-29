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

     // Comparação do primeiro atributo
    switch (escolha1) {
        case 1: // Ataque
            resultado1 = (ataque1 > ataque2) ? 1 : (ataque2 > ataque1) ? 2 : 0;
            soma1 += ataque1;
            soma2 += ataque2;
            printf("Ataque -> Brasil: %d | Argentina: %d\n", ataque1, ataque2);
            break;
        case 2: // Defesa
            resultado1 = (defesa1 > defesa2) ? 1 : (defesa2 > defesa1) ? 2 : 0;
            soma1 += defesa1;
            soma2 += defesa2;
            printf("Defesa -> Brasil: %d | Argentina: %d\n", defesa1, defesa2);
            break;
        case 3: // Recuo
            resultado1 = (recuo1 > recuo2) ? 1 : (recuo2 > recuo1) ? 2 : 0;
            soma1 += recuo1;
            soma2 += recuo2;
            printf("Recuo -> Brasil: %d | Argentina: %d\n", recuo1, recuo2);
            break;
        case 4: // Densidade (menor vence)
            resultado1 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1) ? 2 : 0;
            soma1 += densidade1;
            soma2 += densidade2;
            printf("Densidade -> Brasil: %d | Argentina: %d\n", densidade1, densidade2);
            break;
    }
    // Comparação do segundo atributo
    switch (escolha2) {
        case 1:
            resultado2 = (ataque1 > ataque2) ? 1 : (ataque2 > ataque1) ? 2 : 0;
            soma1 += ataque1;
            soma2 += ataque2;
            printf("Ataque -> Brasil: %d | Argentina: %d\n", ataque1, ataque2);
            break;
        case 2:
            resultado2 = (defesa1 > defesa2) ? 1 : (defesa2 > defesa1) ? 2 : 0;
            soma1 += defesa1;
            soma2 += defesa2;
            printf("Defesa -> Brasil: %d | Argentina: %d\n", defesa1, defesa2);
            break;
        case 3:
            resultado2 = (recuo1 > recuo2) ? 1 : (recuo2 > recuo1) ? 2 : 0;
            soma1 += recuo1;
            soma2 += recuo2;
            printf("Recuo -> Brasil: %d | Argentina: %d\n", recuo1, recuo2);
            break;
        case 4:
            resultado2 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1) ? 2 : 0;
            soma1 += densidade1;
            soma2 += densidade2;
            printf("Densidade -> Brasil: %d | Argentina: %d\n", densidade1, densidade2);
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }