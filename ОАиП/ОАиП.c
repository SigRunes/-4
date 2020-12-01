#include<stdio.h>

int main() {
    int i, j, min, buf, N = 7;
    int arr[] = { 6, 4, 1, 5, -7, 2, 3 };
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1, min = i; j < N; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        buf = arr[i];
        arr[i] = arr[min];
        arr[min] = buf;
    }
    for (i = 0; i < 7; i++)
        printf("%d\n", arr[i]);
    return 0;
}