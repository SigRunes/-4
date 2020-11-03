#include<stdio.h>;

int main() {
	int i, temp;
	int array[] = { 1,6,0,4,2,5 };
	int n = sizeof(array) / sizeof(int);
	float k = 1.247;
	int step = n - 1;
	while (step >= 1) {
		i = 0;
		while (i < n - step) {
			if (array[i] > array[i + step]) {
				temp = array[i];
				array[i] = array[i + step];
				array[i + step] = temp;
			}
			i++;
		}
		step /= k;

	}
	for (i = 0; i < n; i++)
		printf("%d\n", array[i]);
	return 0;
}
