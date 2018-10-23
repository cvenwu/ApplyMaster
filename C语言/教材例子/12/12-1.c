#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch;
	
	if(argc != 2)							//参数个数不对 
	{
		printf("the number of arguments not correct\n\n");
		printf("Usage: 可执行文件名 filename \n");
		exit(0);
	}
	
	if((fp1 = fopen(argv[1], "wt")) == NULL)	//打开文件失败
	{
		printf("can not open this file\n");
		exit(0);
	 } 
	 
	for( ; (ch = getchar()) != '@' ; )
	{
		fputc(ch, fp1);							//输入字符并存储到文件中 
	}
	fclose(fp1);								//关闭文件
	
	//顺序输出文件的内容
	fp2 = fopen(argv[1], "rt");
	for( ; (ch = fgetc(fp2) != EOF) ; )
		putchar(ch);							//顺序读入并显示 
	fclose(fp2);								//关闭打开的文件 
}
