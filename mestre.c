#include <stdio.h>

int main() {
    int tab[10][10];
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tab[i][j] = 0;
        }
    }

    int r1 = 2, c1 = 1;
    for(i = c1; i < c1 + 3; i++) tab[r1][i] = 3;

    int r2 = 5, c2 = 7;
    for(i = r2; i < r2 + 3; i++) tab[i][c2] = 3;

    int r3 = 1, c3 = 1;
    for(i = 0; i < 3; i++) tab[r3 + i][c3 + i] = 3;

    int r4 = 0, c4 = 9;
    for(i = 0; i < 3; i++) tab[r4 + i][c4 - i] = 3;

    int size = 5;
    int center = size / 2;
    int cone[5][5];
    int cruz[5][5];
    int octa[5][5];

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if ( (j - center) < 0 ? (center - j) <= i : (j - center) <= i ) {
                if ( (j - center) < 0 ? (center - j) <= i : (j - center) <= i ) cone[i][j] = 1;
                else cone[i][j] = 0;
            } else cone[i][j] = 0;
            if (i == center || j == center) cruz[i][j] = 1; else cruz[i][j] = 0;
            if ( ( (i - center) < 0 ? (center - i) : (i - center) ) + ( (j - center) < 0 ? (center - j) : (j - center) ) <= center ) octa[i][j] = 1;
            else octa[i][j] = 0;
        }
    }

    int or_cone_r = 0, or_cone_c = 4;
    int or_cruz_r = 6, or_cruz_c = 2;
    int or_octa_r = 3, or_octa_c = 6;

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if (cone[i][j] == 1) {
                int tr = or_cone_r + (i - center);
                int tc = or_cone_c + (j - center);
                if (tr >= 0 && tr < 10 && tc >= 0 && tc < 10) tab[tr][tc] = 5;
            }
        }
    }

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if (cruz[i][j] == 1) {
                int tr = or_cruz_r + (i - center);
                int tc = or_cruz_c + (j - center);
                if (tr >= 0 && tr < 10 && tc >= 0 && tc < 10) tab[tr][tc] = 5;
            }
        }
    }

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if (octa[i][j] == 1) {
                int tr = or_octa_r + (i - center);
                int tc = or_octa_c + (j - center);
                if (tr >= 0 && tr < 10 && tc >= 0 && tc < 10) tab[tr][tc] = 5;
            }
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
