#include <stdio.h>

#define NUM 6

void main()
{
	int a[NUM], i, j;
	for(i = 0; i < NUM; i++)
		scanf("%d", &a[i]);
	
	for(i = 0; i < NUM; i++)
	{
		for(j = 0; j < NUM; j++)
		{
			printf("%d\t", a[(i + j + 1) % 6]);
		}
		printf("\n");	
	}	
} 


