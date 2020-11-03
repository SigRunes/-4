#include<stdio.h>; 

int main() {
    int i, temp, step;
    int array[] = { 5,3,8,2,6,1 };
    int n = sizeof(array) / sizeof(int);
    float k = 1.247;
    for (step = n - 1; step >= 1; step /= k) {
        for (i = 0; i < n - step; i++) {
            if (array[i] > array[i + step]) {
                temp = array[i];
                array[i] = array[i + step];
                array[i + step] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d\n", array[i]);
    return 0;
}