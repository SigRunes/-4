#include <stdio.h>

int main(){
	int num;
	printf("num:");
	scanf("%i", &num);

	if ((num % 2) == 0) printf("Even ");
	else printf("Odd ");
	if (num > 99) printf("three-digit");
	else if ((99 >= num) & (num > 9)) printf("two-digit");
	else if (num <= 9)  printf("digit");
	printf("number");

	return 0;
}