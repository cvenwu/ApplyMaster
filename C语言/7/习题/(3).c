#include <stdio.h>
#define NUM 10


void main()
{
	int a[NUM], min, temp, max, i;
	
	for(i = 0; i < NUM; i++)
	{
		scanf("%d", &a[i]);
	}
	
	max = 0;
	min = 0;
	for(i = 0; i < NUM; i++)
	{
		if(a[max] < a[i])
			max = i;
		if(a[min] > a[i])
			min = i;
	}
	
	temp = a[max];
	a[max] = a[min];
	a[min] = temp;
	
	for(i = 0; i < NUM; i++)
	{
		printf("%d\t", a[i]);
	}
}
