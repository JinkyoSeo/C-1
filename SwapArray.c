#include <stdio.h> 

#define N   6  

void swapArray(int* p, int* q, int size)

{

	int i, temp;

	for (i = 0; i < size; i++)

	{

		temp = *(p + i);

		*(p + i) = *(q + i);

		*(q + i) = temp;

	}

}

void printArray(int* p, int size)

{

	int i;

	for (i = 0; i < size; i++)

		printf("%d ", *(p + i));

}

int main()

{

	int a[N] = { 1,2,3,4,5,6 };

	int b[N] = { 7,8,9,10,11,12 };

	printf("\narr1 = "); printArray(a, N);

	printf("\narr2 = "); printArray(b, N);

	printf("\n\nafter swap");

	swapArray(a, b, N);

	printf("\narr1 = "); printArray(a, N);

	printf("\narr2 = "); printArray(b, N);

}