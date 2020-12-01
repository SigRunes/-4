
#include <stdio.h>

int main(){
    int A, B;
    printf("A:");
    scanf("%i", &A);
    printf("B:");
    scanf("%i", &B);
    printf("%d\n", (A > 2) & (B <= 3));
    return 0;
}