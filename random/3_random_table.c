#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i, n, couter[10] = {0};
    for (i = 0; i < 10; i++){
        do{
            n = rand() % 10 + 1;
        }while(couter[n] > 0);
        couter[n] ++;
        printf("%d ", n);
    }
    printf("\n");
    return 0;
}