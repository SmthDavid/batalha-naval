#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int navioH[3] = {3,3,3};
    int navioV[3] = {3,3,3};
    int linhaH = 2;
    int colunaH = 4;
    int linhaV = 5;
    int colunaV = 1;
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for(i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    for(i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
