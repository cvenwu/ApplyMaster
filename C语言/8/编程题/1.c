#include <stdio.h>
#include <math.h>
int isPrimeNumber(int num);	 

void main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	if(isPrimeNumber(num) == 1)
		printf("是素数!\n");
	else
		printf("不是素数!\n");
}


int isPrimeNumber(int num)
{
	int i;
	for(i = 2; i <= sqrt(num); i++)
		if(num % i == 0)
			return 0;
	
	return 1;
}
