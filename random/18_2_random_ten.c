#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n[10];
    int i, j;
    for (i = 0; i < 10; i++){
        do{
            n[i] = rand() % 10 + 1;
            for(j = 0; j < i; j ++){
                if(n[i] == n[j]){
                    break;
                }
            }
        }while(j != i);
        printf("%d ", n[i]);
    }
    return 0;
}