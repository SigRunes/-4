
#include <stdio.h>

int main(){
    int A;
    printf("A:");
    scanf("%i", &A);
    printf("%d\n", (A > 9) & (A < 100) & (A % 2 == 0));
    return 0;
}