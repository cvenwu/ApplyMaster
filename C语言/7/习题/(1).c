#include <stdio.h>
#define NUM 20

void main()
{
	
	int num[NUM], count = 0, sum = 0, i;
	
	for(i = 0; i < NUM; i++)
		scanf("%d", &num[i]);
	
	for(i = 0; i < NUM; i++)
	{
		if(num[i] > 0)
		{
			count++;
			sum += num[i]; 
		}
	}
	
	printf("��%d���Ǹ�����,��Ϊ%d\n", count, sum);
	
}
