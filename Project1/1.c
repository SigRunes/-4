#include<stdio.h> 

int main(){
    int d, i, x, j;
    int array[] = { 1, 2, 6, -9, 8, 3 };
    int n = sizeof(array) / sizeof(int);
    d = n / 2;
    while (d > 0) {
        i = d;
        while (i < n) {
            x = array[i];
            j = i;
            while (j >= d) {
                if (x < array[j - d]) {
                    array[j] = array[j - d];
                    j = j - d;
                }
                else break;
            }
            array[j] = x;
            i++;
        }
        d = d / 2;
    }
    for (i = 0; i < 6; i++)
        printf("%d\n", array[i]);
    return 0;

}