#include <stdio.h>


void swap(itn a, int b);		//����ԭ������

void main()
{
	int x = 7, y = 11;
	
	printf("before swapped : ");
	printf("x=%d, y=%d\n", x, y);			
	
	swap(x, y);							//��������(x,y Ϊʵ�Σ�ֵ���ݷ�ʽ) 
	
	printf("after swapped : ");
	printf("x=%d, y=%d\n", x, y);	
}

void swap(int a, int b)					//�������� (a,bΪ�β�) 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
