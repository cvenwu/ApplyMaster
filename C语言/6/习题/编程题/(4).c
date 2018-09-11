#include <stdio.h>


void main()
{
	int i, j, n, sum = 0, temp, a;
	scanf("%d%d", &n, &a);
	for(i = 1; i <= n; i++)
	{
		temp = 0;
		for(j = 1; j <= i; j++)
		{
			temp = temp * 10 + a;
		}
		
		sum += temp;
	}
	
	printf("%d\n", sum);
	
}
