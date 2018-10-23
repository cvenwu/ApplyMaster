#include <stdio.h>
void main()
{
	int i = 1, sum = 0;
	while(i <= 99)
	{
		sum += (i * (i + 1) * (i + 2)); 
		i += 2;
	}
	
	printf("%d\n", sum);
	
	
}
