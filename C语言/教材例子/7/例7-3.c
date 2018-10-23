#include <stdio.h>
#include <memory.h>

#define NUM 10

void main()
{
	int a[NUM], i, j, t , flag;
	
	printf("input %d numbers: \n", NUM);
	for(i = 0; i < NUM; i++)
	{
		scanf("%d", &a[i]); 
	} 

	
	//¸Ä½ø°æµÄÃ°ÅÝÅÅÐò 
	for(i = 0; i < NUM - 1; i++)
	{
		flag = 0;
		for(j = 0; j < NUM - 1 - i; j++)
		{
			printf("233\n");
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 1;
			}
		}		
		if(flag == 0)
			break;
	}
	
	printf("\n");
	for(i = 0; i < NUM; i++)
	{
		printf("%d\t", a[i]);
	}
	
 } 
