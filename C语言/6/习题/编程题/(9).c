#include <stdio.h>
void main()
{
	
	int num, temp, sum = 0, num1;
	scanf("%d", &num);
	num1 = num;
	while( num / 10 != 0 )
	{
		temp = num % 10;
		sum = sum * 10 + temp;
		num /= 10;
	}
	
	sum = sum * 10 + num;
	
	if(sum == num1)
		printf("是回文数!\n");
	else
		printf("不是回文数!\n");
	
	
}
