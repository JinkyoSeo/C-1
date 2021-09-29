#include <stdio.h>

int main(void)
{
	double k, m;

	printf("Please enter kilometers: ");
	scanf("%lf", &k);
	//1km = 0.621371mile
	m = k / 1.609;
	printf(" %.1lf km is equal to %.1lf miles", k, m);
	return 0;

}