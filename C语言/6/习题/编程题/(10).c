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
					printf("5�ֵ�Ӳ����Ҫ%d��,2�ֵ�Ӳ����Ҫ%d��,1�ֵ�Ӳ����Ҫ%d��\n", i, j, q);	
				}	
			} 
		}
	}
	
}
