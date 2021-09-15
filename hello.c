#include <stdio.h>

int main() {
	int num1;
	int num2;

	printf("두개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);

	printf("%d & %d = %d \n", num1, num2, num1 & num2);
	printf("%d l %d = %d \n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d \n", num1, num2, num1 ^ num2);

	return 0;
}