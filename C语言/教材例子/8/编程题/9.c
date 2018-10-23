#include <stdio.h>

int fact(int n);
void main()
{
	int n, m, k, i;
	printf("Please input n and m : ");
	scanf("%d %d", &n, &m);
	k = m;
	for(i = 1; i <= n - 1; i++)
	{
		k = k * (m - 1);
		m--;
	}
	
	
	printf("%d\n", k / fact(n));

}


int fact(int n)
{
	if(n == 1)
		return 1;
	else
		return n * fact(n-1);

}
