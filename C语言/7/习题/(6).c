#include <stdio.h>
#define LEN 100
void main()
{
	char str[LEN], strEmp[LEN];
	gets(str);
	int i, j;
	for(i = 0, j = 0; i < strlen(str); i++)
	{
		if(str[i] != 'c')
		{
			strEmp[j] = str[i];
			j++;	
		}
		else
			continue;
	}
	
	for(i = 0; i < strlen(strEmp); i++)
		printf("%c", strEmp[i]);
	
	printf("\n");
}
