#include <stdio.h>
#define LEN 4
void main()
{
	int num[LEN], num2[LEN + 1], i, tmp;
	for(i = 0; i < LEN; i++)
	{
		scanf("%d", &num[i]); 
	}
	
	for(i = 0; i < LEN; i++)
		printf("%d\t", num[i]);
	
	printf("\n");
	
	printf("请输入要插入的数:");
	scanf("%d", &tmp);
	
	for(i = 0; i < LEN; i++)
	{
		if(tmp > num[i])
			num2[i] = num[i];
		else
		{
			if((tmp < num[i]) && (tmp > num[i-1]))
			{
				num2[i] = tmp;
			}
			num2[i+1] = num[i];
		}
	}
	
	for(i = 0; i < LEN + 1; i++)
		printf("%d\t", num2[i]);
	
}
