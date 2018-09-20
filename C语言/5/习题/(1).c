#include <stdio.h>
void main()
{
	int num;
	scanf("%d", &num);
	if(num > 0)
	{
		printf("正数\n");
	}
	else if(num == 0)
	{
		printf("没有正负之分!\n");
	}
	else
	{
		printf("负数\n");
	}
	
	if(num % 2 == 0)
	{
		printf("偶数\n");
	}
	else 
	{
		printf("奇数\n");
	}
	
	
	
	
 } 
