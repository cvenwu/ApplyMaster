#include <stdio.h>


/*
void main()
{
	FILE *fp;
	fp = fopen("wang.txt", "rt");
	if(fp == NULL)
	{
		printf("Open Error!\n");
		exit(-1);
	}
	
	
	if(fclose(fp))
	{
		printf("close error!\n");
	}
} 

*/



void main()
{
	FILE *fp;
	char ch;
	if((fp = fopen("wang.txt", "r+")) == NULL)
	{
		printf("Open Error!\n");
		exit(-1);
	}
	
	while((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	
	printf("\ninput what you want to input : ");
	while((ch = getchar()) != '@')			//从键盘中读取字符 ，如果为@则结束 
	{
		fputc(ch, fp);						//输入字符ch到fp所指向的文件中 
	}
	
	if(fclose(fp))
	{
		printf("Close Error!\n");
		exit(-1);
	}
}
