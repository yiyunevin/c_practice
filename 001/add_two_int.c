#include <stdio.h>

int main(){
    int a;
    int b;
    int sum;
    printf ("Please enter the first integer: ");
    scanf("%d", &a);
    printf ("Please enter the second integer: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is %d + %d = %d", a, b, sum);
    return 0;
}