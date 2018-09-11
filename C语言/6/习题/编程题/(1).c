

/** 
	±‡≥Ãº∆À„2 + 4 + .... + 100 

*/ 

#include <stdio.h>
int main()
{
	int sum = 0, i;
	for(i = 2; i <= 100; i += 2)
	{
		sum += i;	
	}	
	printf("%d\n",sum);
}
