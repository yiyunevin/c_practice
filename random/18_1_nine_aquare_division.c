#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nine_square_2d(){
    srand(time(0));
    int v[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int i, j, k = 0;
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j++){
            int r = rand() % (9-k) + k;
                /**
                 * (i, j) = (0, 0); k = 0;  r = [0, 8];
                 * (i, j) = (0, 1); k = 1;  r = [1, 8];
                 * ...
                 * (i, j) = (1, 0); k = 3;  r = [3, 8];
                 * ...
                 * (i, j) = (2, 0); k = 6;  r = [6, 8];
                 * ...
                 * r = [k, 8]
                 */
            int m = r / 3;      // m = [0, 2], [1, 2], [2]
            int n = r % 3;      // n = [0, 2]
            int t = v[i][j];    // swap
            v[i][j] = v[m][n];
            v[m][n] = t;
            k++;
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d", v[i][j]);
        }
        printf("\n");
    }
}

void nine_square_1d(){
    srand(time(0));
    int v[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int i, j, k = 0;
    for (int i = 0; i < 9; i ++){
            int r = rand() % (9-i) + i;
            int t = v[i];    // swap
            v[i] = v[r];
            v[r] = t;
    }
    for(int i = 0; i < 9; i ++){
        printf("%d", v[i]);
        if (i % 3 == 2)
            printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if(n == 1)
        nine_square_1d();
    else
        nine_square_2d();
    return 0;
}