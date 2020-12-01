#include <stdio.h>

int main(){
    float a, b, c;
    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);
    printf("%d\n", (a * a == b * b + c * c) | (b * b == a * a + c * c) | (c * c == a * a + b * b));
    return 0;
}