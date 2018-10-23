#include <stdio.h>

void main()
{
	int num1, num2, num;
	printf("input the two numbers : ");
	
	
	
	scanf("%d%d", &num1, &num2);
	num = MaxCommonFactor(num1 > num2 ? num1 : num2, num1 > num2 ? num2 : num1);
	printf("%d 与 %d 的最大公约数为 %d\n", num1, num2, num);
}


//求两个数的最大公约数 
int MaxCommonFactor(int num1, int num2)
{
	if(num1 % num2 == 0)		
		return num2;
	
	return MaxCommonFactor(num2, num1 % num2);
}
