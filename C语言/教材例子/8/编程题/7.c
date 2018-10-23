#include <stdio.h>
void main()
{
	int k, n;
	printf("please input k and n : ");
	scanf("%d %d", &k, &n);
	
	printf("%d\n", sum(n, k));
}


int sum(int n, int k)
{
	int i, sum = 0;
	for(i = 1; i <= n; i++)
		sum += ji(i, k); 
	
	return sum;
}

int ji(int num, int k)
{
	int i, num2 = 1;
	for(i = 1; i <= k; i++)
		num2 *= num;
	
	return num2;
}
