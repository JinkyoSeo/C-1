#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Binary(num);

int main() {
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);
	Binary(num);

	return 0;
}

int Binary(num) {
	if (num == 0 || num == 1)
		printf("%d", num);
	else {
		Binary(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}