#include <stdio.h>


void swap(itn a, int b);		//函数原型声明

void main()
{
	int x = 7, y = 11;
	
	printf("before swapped : ");
	printf("x=%d, y=%d\n", x, y);			
	
	swap(x, y);							//函数调用(x,y 为实参，值传递方式) 
	
	printf("after swapped : ");
	printf("x=%d, y=%d\n", x, y);	
}

void swap(int a, int b)					//函数定义 (a,b为形参) 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
