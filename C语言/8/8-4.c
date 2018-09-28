#include <stdio.h>

int max(int a, int b);		//函数原型声明 

void main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("the biggest number is : %d\n", c);
}

int max(int a, int b)		//函数定义，带参数有返回值
{
	return (a > b ? a : b);
} 
