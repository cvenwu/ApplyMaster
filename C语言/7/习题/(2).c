#include <stdio.h>
#define NUM 10 
void main()
{
	int a[NUM], i, j, flag, temp;
	
	for(i = 0; i < NUM; i++)
		scanf("%d", &a[i]);
	
	for(i = 0; i < NUM - 1; i++)
	{
		flag = 0;
		for(j = 0; j < NUM - 1 - i; j++)
		{
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}	
		if(flag == 0)
			break;
	}
	/*
	for(i = 0; i < NUM; i++)
	{
		
			printf("\n%d\t", a[i]);
		
	}*/
	
	for(i = 0; i < NUM; i++)
	{
		if(a[i] % 2 != 0)
		{
			printf("\n%d\t", a[i]);
		}
	}
	
	for(i = 0; i < NUM; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("\n%d\t", a[i]);
		}
	}
	
} 
