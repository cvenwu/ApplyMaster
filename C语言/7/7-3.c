#include <stdio.h>
void main()
{
	char str[] = "china";
	printf("%d\n", sizeof(str));
	int i;
	for(i = 0; i < sizeof(str); i++)
	{
		printf("%c\t", str[i]);
	}
	
	char str2[] = {"china"};
	printf("%d\n", sizeof(str2));
}
