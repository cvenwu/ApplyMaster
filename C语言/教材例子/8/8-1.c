#include <stdio.h>
#include <math.h>

void showerror();			//声明showerror函数的原型

 

void main()
{
	int a;
	scanf("%d", &a);
	
	while(a < 0)
	{
		showerror();
		scanf("%d", &a);	
	}	
	
	printf("sqrt(a) = %.2f\n", sqrt(a));
}

void showerror()					//函数的定义，无参数无返回值 
{
	printf("input error!\n");		//函数体，没有声明变量 
}
