#include <stdio.h>

int dif(int x, int y, int z);
int max(int x, int y, int z);
int min(int x, int y, int z);


void main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	d = dif(a, b, c, d);
	printf("Max - Min = %d\n", d);
}

int dif(int x, int y, int z)	//�������е����ֵ����Сֵ�Ĳ� 
{
	return (max(x, y, z) - min(x, y, z)); 
}

int max(int x, int y, int z)
{
	
}
