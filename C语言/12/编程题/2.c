#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
void main()
{
	FILE *file1, *file2;
	char string[200], fileName[200], fileName2[200];
	
	
	printf("Please input the file1 name : ");
	gets(fileName);
	printf("Please input the file2 name : ");
	gets(fileName2);
	
	if((file1 = fopen(fileName, "a+t")) == NULL)
	{
		printf("Open file1 error!\n");
		exit(0);
	}
	
	if((file2 = fopen(fileName2, "r+")) == NULL)
	{
		printf("Open file2 error!\n");
		exit(0);
	}
	
	while((fgets(string, 200, file2)) != NULL)
	{
		fputs(string, file1);
	}
	
	fclose(file1);
	fclose(file2);
	
}
