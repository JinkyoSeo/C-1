#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int i;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num == 1 || num == 2)
		goto PRIME;

	for (i = 2; i < num; i++) {
		if (num % i == 0)
			goto NOTPRIME;
		else if(i == (num - 1))
			goto PRIME;
	}
NOTPRIME:
	printf("�Ҽ��� �ƴ�");
	goto END;
PRIME:
	printf("�Ҽ���");
	goto END;
END:
	return 0;
}