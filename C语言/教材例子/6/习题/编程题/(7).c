#include <stdio.h>
void main()
{
	int i, num1, num2, num3;
	for(i = 100; i <= 999; i++)
	{
		num1 = i % 10;
		num2 = i / 10 % 10;
		num3 = i / 100;
		if((num3 * num3 * num3 + num2 * num2 * num2 + num1 * num1 * num1) == i)
			printf("%d\t", i);
	}
	
}
