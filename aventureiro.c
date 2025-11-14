#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    int linha, coluna;

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    int r1 = 2, c1 = 1;
    for (coluna = c1; coluna < c1 + 3; coluna++) {
        tabuleiro[r1][coluna] = 3;
    }

    int r2 = 5, c2 = 7;
    for (linha = r2; linha < r2 + 3; linha++) {
        tabuleiro[linha][c2] = 3;
    }

    int r3 = 1, c3 = 1;
    for (linha = 0; linha < 3; linha++) {
        tabuleiro[r3 + linha][c3 + linha] = 3;
    }

    int r4 = 0, c4 = 9;
    for (linha = 0; linha < 3; linha++) {
        tabuleiro[r4 + linha][c4 - linha] = 3;
    }

    printf("TABULEIRO BATALHA NAVAL 10x10:\n\n");

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
