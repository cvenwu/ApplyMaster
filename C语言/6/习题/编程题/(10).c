#include <stdio.h>
void main()
{
	
	int i, j, q, sum;
	for(i = 0; i <= 30; i++)
	{
		for(j = 0; j <= 75; j++)
		{
			for(q = 0; q <= 150; q++)
			{
				if(i * 5 + j * 2 + q * 1 == 150)
				{
					printf("5分的硬币需要%d个,2分的硬币需要%d个,1分的硬币需要%d个\n", i, j, q);	
				}	
			} 
		}
	}
	
}
