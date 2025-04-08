#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Coordenadas iniciais para os navios (valores definidos manualmente)
    int x_horizontal = 2, y_horizontal = 4; // Começa em (2,4)
    int x_vertical = 6, y_vertical = 1;     // Começa em (6,1)

    // Vetores para armazenar as coordenadas dos navios
    int navio_horizontal[TAMANHO_NAVIO][2];
    int navio_vertical[TAMANHO_NAVIO][2];

    // Posiciona navio horizontalmente (mesma linha, colunas diferentes)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        navio_horizontal[i][0] = x_horizontal;
        navio_horizontal[i][1] = y_horizontal + i;
    }

    // Posiciona navio verticalmente (mesma coluna, linhas diferentes)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        navio_vertical[i][0] = x_vertical + i;
        navio_vertical[i][1] = y_vertical;
    }

    // Exibe coordenadas dos navios
    printf("=== Coordenadas dos Navios no Tabuleiro ===\n\n");

    printf("Navio Horizontal (posição inicial: (%d, %d)):\n", x_horizontal, y_horizontal);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navio_horizontal[i][0], navio_horizontal[i][1]);
    }

    printf("\nNavio Vertical (posição inicial: (%d, %d)):\n", x_vertical, y_vertical);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navio_vertical[i][0], navio_vertical[i][1]);
    }

    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
