#include <stdio.h>

int main(){
    int a;
    int b;
    printf ("Please enter the first integer: ");
    scanf("%d", &a);
    printf ("Please enter the second integer: ");
    scanf("%d", &b);

    a = a ^ b;
    printf("step 1 : %d\n", a);
    b = a ^ b;
    printf("step 2 : %d\n", b);
    a = a ^ b;
    printf("step 3 : %d\n", a);

    printf("After : %d and %d", a, b);

    return 0;
}