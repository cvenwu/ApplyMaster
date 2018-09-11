#include <stdio.h>
void main()
{
	
	int n = 5, i, j;
	for(i = 1; i <= n; i++)
	{
		
		for(j = 1; j < n / 2 + 1; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= 7 - 2 * n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	/*Í¼°¸2 
	int n = 5, i, j;
	for(i = 1; i <= n; i++)
	{
		
		for(j = 1; j <= (5 - i); j++)
		{
			printf(" ");
		}
		for(j = 1; j <= 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/ 
	
	/*Í¼°¸3 
	int n = 5, i, j;
	for(i = 1; i <= n; i++)
	{
		
		for(j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
}
