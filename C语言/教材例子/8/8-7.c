#include <stdio.h>

int dif(int x, int y, int z);
int max(int x, int y, int z);
int min(int x, int y, int z);


void main()
{
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	
	d = dif(a, b, c);
	printf("Max - Min = %d\n", d);
}

int dif(int x, int y, int z)	//求三数中的最大值与最小值的差 
{
	return (max(x, y, z) - min(x, y, z)); 
}

int max(int x, int y, int z)	//求三个数的最大值 
{
	int r;
	r = x > y ? x : y;
	return (r > z ? r : z);
}

int min(int x, int y, int z)	//求三个数的最小值 
{
	int r;
	r = x < y ? x : y;
	return (r < z ? r : z); 
}
