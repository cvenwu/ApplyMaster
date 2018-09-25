#include <stdio.h>
void main()
{
	int num1, num2, num3, tmp;
	scanf("%d%d%d", &num1, &num2, &num3);
	
	/*·½·¨Ò» 
	
	if(num1 > num2)
	{
		if(num1 < num3)
			printf("%d %d %d", num2, num1, num3);
		else
		{
			if(num2 > num3)
				printf("%d %d %d", num3, num2, num1);
			else
				printf("%d %d %d", num2, num3, num1);
		}
	}
	else
	{
		if(num2 < num3)
			printf("%d %d %d", num1, num2, num3);
		else
		{
			if(num1 > num3)
				printf("%d %d %d", num3, num1, num2);
			else
				printf("%d %d %d", num1, num3, num2);
		}
	}	
	
	printf("\n");
	*/
	
	if(num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	if(num2 > num3)
	{
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}

	if(num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	
	printf("%d %d %d\n", num1, num2, num3);
}
