#include <stdio.h>

void compare(int a, int b);		//也可以写成void compare(int, int); 


void main()
{
	int i = 2;
	compare(i, i++);
	printf("i=%d\n", i);	
}

void compare(int a, int b)		//函数定义，有形参无返回值 
{
	printf("a=%d b=%d\n", a, b);
	if(a > b)
		printf("a>b\n");
	else
		printf("a<b\n");
}
