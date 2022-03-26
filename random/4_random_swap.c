#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i, n[10];
    for(i = 0; i < 10; i++){
        n[i] = i+1;
    }
    for(i = 0; i < 10; i++){
        int j = i + rand() % (10-i) + 1;    // j = [i, 10]
        int t = n[i];   //swap: not overlap
        n[i] = n[j];
        n[j] = t;
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}