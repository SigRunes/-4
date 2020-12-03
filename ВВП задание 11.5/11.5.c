#include <stdio.h>

int main(){
    int num;
    printf("num:");
    scanf("%i", &num);
    if (num == 0) printf("Zero");
    else {
        if (num > 0) printf("Positive ");
        else printf("Negative ");
        if ((num % 2) == 0) printf("Even ");
        else printf("Odd ");
    }
    printf("number");

    return 0;
}