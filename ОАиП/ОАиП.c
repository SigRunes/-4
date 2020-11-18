#include<stdio.h>  

int main(){
    int i, x, d, j;
    int array[] = { 1, 3, 6, 7, 8, 2 };
    int n = sizeof(array) / sizeof(int);
    for (d = n / 2; d > 0; d /= 2) {
        for (i = d; i < n; i++) {
            x = array[i];
            for (j = i; j >= d; j -= d) {
                if (x < array[j - d])
                    array[j] = array[j - d];
                else break;
            }
            array[j] = x;
        }
    }
    for (i = 0; i < 6; i++)
        printf("%d\n", array[i]);
    return 0;
}