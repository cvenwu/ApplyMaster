#include <stdio.h>
#include <stdlib.h>

void main()
{
	long k, min, max, count[10] = {0};
	char str[9];
	int i;
	
	//输入最小、最大数
	printf("input the first number: ");
	scanf("%ld", &min);
	
	printf("input the last number: ");
	scanf("%ld", &max);
	
	if(min > max)
	{
		printf("\ninput errpr!");
		return;
	}
	
	//统计各数字出现的次数
	for(k = min; k < max; k++)
	{
		sprintf(str, "%8d", k);		//将该数字转换为字符串,存入str中
		for(i = 7; i >= 0 && str[i] != ' '; i--)
			count[str[i] - '0']++;
	}	

	for(i = 0; i < 10; i++)
	{
		printf("%d--(%ld)   ", i, count[i]);
		if(i == 4)
			printf("\n");
	}
	
	printf("\n");
} 
