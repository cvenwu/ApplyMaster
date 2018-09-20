#include <stdio.h>
void main()
{

	int num1, num2, num3, tmp, max, min;
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
		if(num2 > num3)
		{
			tmp = num2;
			num2 = num3;
			num3 = tmp;	
		} 
	}
	else
	{
		if(num2 > num3)
		{
			tmp = num2;
			num2 = num3;
			num3 = tmp;
		}
	}
	
	if(num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	
	
	printf("%d %d %d\n", num1, num2, num3);

	 
}
