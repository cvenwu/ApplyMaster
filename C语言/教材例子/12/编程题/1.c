#include <stdio.h>
#include <memory.h>

void main()
{
	FILE *file;
	int i = 1;
	char inputFile[81], string[200];
	
	printf("Please input the file name you want to display : ");
	gets(inputFile);
	
	if((file = fopen(inputFile, "r+")) == NULL)	
	{
		printf("Open file error!\n");
		exit(0);
	}
	
	while(fgets(string, 200, file) != NULL)
	{
		printf("%d: %s", i, string);
		i++;
	}
	
	
	fclose(file);
	
	
}
