#include <stdio.h>
#include <math.h>

void showerror();			//����showerror������ԭ��

 

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

void showerror()					//�����Ķ��壬�޲����޷���ֵ 
{
	printf("input error!\n");		//�����壬û���������� 
}
