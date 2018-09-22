#include <stdio.h>
void main()
{
	int str[10];
	memset(str, 0, 10 * sizeof(int));
	
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", str[i]);
	}
	
	short a[10];
	memset(a, 2, 10 * sizeof(short));
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	
 } 
