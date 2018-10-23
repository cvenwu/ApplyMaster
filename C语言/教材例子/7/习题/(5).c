#include <stdio.h>

#define ROW 5
#define COL 5


void main()
{
	int num[ROW][COL], i, j, sum = 0, product = 1;
	
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			scanf("%d", &num[i][j]);
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			if(i == j)
				sum += num[i][j];
			
			if((i % 2 ==0) && (j % 2 == 0))
			{
				product *= num[i][j];
			}
				
			 
		}
	}
	
	printf("sum is %d\t, product is %d\n", sum, product);
		
	
	
	
	
	
}
