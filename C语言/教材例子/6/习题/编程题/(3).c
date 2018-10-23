#include <stdio.h>

void main()
{
	int i, j, sum = 0, temp;
	for(i = 1; i <= 5; i++)
	{
		temp = 1;
		for(j = i; j >= 1; j--)
		{
			temp *= j;
		}	
		
		sum += temp;
	}	
	printf("%d\n", sum);
}


