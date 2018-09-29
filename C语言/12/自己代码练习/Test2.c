#include <stdio.h>
#include <stdlib.h>


void main()
{
	char string[81], inputFile[81], outputFile[81];
	FILE *input, *output;
	
	printf("Please input the input file name :  ");
	gets(inputFile);
	printf("Please input the output file name : ");
	gets(outputFile);
	
	if((input =  fopen(inputFile, "r+t")) == NULL)
	{
		printf("Open File Error!\n");
		exit(0);
	}
	
	if((output = fopen(outputFile, "w+t")) == NULL)
	{
		printf("Open output file error!\n");
		exit(0);
	}
	
	while(fgets(string, 81, input) != NULL)
	{
		fputs(string, output);
	}
	
	if(fclose(input))
	{
		printf("Close input file error!\n");
		exit(0);
	}
	
	if(fclose(output))
	{
		printf("Close output file Error!\n");
		exit(0);
	}
	
		
} 
