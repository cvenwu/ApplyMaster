#include <stdio.h>

int max(int a, int b);		//����ԭ������ 

void main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("the biggest number is : %d\n", c);
}

int max(int a, int b)		//�������壬�������з���ֵ
{
	return (a > b ? a : b);
} 
