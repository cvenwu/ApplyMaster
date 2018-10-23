
/*文件加密解密*/



#include <stdio.h>
#include <stdlib.h>

#define KEY 0xFA

void main(int argc, char *argv[])
{
	FILE *fpr, *fpw;
	char ch, k = (char)KEY;
	
	if( (argc != 3) || *argv[2] != '+' && &argv[2] != '-' )	//命令行参数有误
	{
		printf("Usage: 执行文件名 filename +/-\n");
		exit(0);
	} 
	
	fpr = fopen(argv[1], "rb");
	if(fpr == NULL)					//以读的方式打开文件 
	{
		printf("file: %s not found!\n", argv[1]);
		exit(0);
	}
	
	fpw = fopen(argv[1], "rb+");		//以读写的方式打开文件
	if(fpw == NULL)
	{
		printf("file: %s not found!\n", argv[1]);
		exit(0);
	}
	
	while( (ch = fgetc(fpr)) != EOF)
	{
		fputc (ch^k, fpw);
		k = (*argv[2] == '+') ? ch : ch^k;
	}
	
	
	fclose(fpr);				//关闭文件
	fclose(fpw);				//关闭文件 
}
