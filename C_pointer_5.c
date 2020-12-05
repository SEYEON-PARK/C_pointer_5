#include <stdio.h>

int main(void)
{
	int* a;
	int b = 10;
	a = &b;

	printf("%d\n", a);
	printf("%d\n", *a);

	return 0;
}