#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void odd(int n[]);
void even(int n[]);

int main(void) {
	int num[5];
	int i;
	
	printf("�Է�: ");
	for (i = 0;i < 5;i++) {
		scanf("%d", &num[i]);
	}
	odd(num);
	even(num);
	return 0;

}

void odd(int n[]) {
	int i;
	printf("\nȦ�� �Է�: ");
	for (i = 0;i < 5;i++) {
		if (n[i] % 2 == 1)
			printf("%d  ", n[i]);
	}

}

void even(int n[]) {
	int i;
	printf("\n¦�� �Է�: ");
	for (i = 0;i < 5;i++) {
		if (n[i] % 2 == 0)
			printf("%d  ", n[i]);
	}

}