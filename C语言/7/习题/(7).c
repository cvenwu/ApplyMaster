#include <stdio.h>
#define LEN 100

void main()
{
	int i;
	char str[LEN];
	gets(str);
	for(i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	
}
