#include <stdio.h>
#define NUM 10
//ѡ�������㷨 
void main()
{
	int a[NUM], i, j, k, t;
	
	printf("input %d numbers: \n", NUM);
	
	for(i = 0; i < NUM; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < NUM - 1; i++)
	{
		k = i;
		for(j = i + 1; j <= NUM - 1; j++)		//�����i + 1��ʼ 
		{
			if(a[k] > a[j])
			{	
				k = j;		
			}
		}
		t = a[i];
		a[i] = a[k];
		a[k] = t;
	}
	
	for(i = 0; i < NUM; i++)
		printf("%d\t", a[i]);	
}
