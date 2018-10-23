#include <stdio.h>
void main()
{
	int num, temp, sum = 0;
	scanf("%d", &num);
	while(num / 10 != 0)
	{
		temp = num % 10;
		sum += temp;
		num /= 10;
	}
	
	sum += num;
	
	printf("%d\n", sum);
	
}
