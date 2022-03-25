#include <stdio.h>

int main(){
    int v[5], i;
    for(int i=0; i<5; i++){
        scanf("%d", &v[i]);
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4-i; j++){
            if(v[j]>v[j+1]){
                int t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
        }
    }

    for(int i=0; i<5; i++){
        printf("%d", v[i]);
    }
    return 0;
}