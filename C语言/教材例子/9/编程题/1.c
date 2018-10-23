#include <stdio.h>

void swap(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a,b);
}
