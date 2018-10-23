

/*求文件的长度*/ 


#include <stdio.h>
#include <stdlib.h>


void main()
{
	FILE *fp;
	long length;
	
	if( argc != 2)	//命令行参数有误
	{
		printf("Usage: 执行文件名 filename \n");
		exit(0);	
	}
	
	fp = fopen(argv[1], "rb");	//以只读的方式打开文件
	if( fp == NULL )
	{
		printf("file not found!\n");
		exit(0);
	}
	
	fseek(fp, 0L, SEEK_END);		//文件位置指针指向文件尾
	length = ftell(fp);				//取文件位置指针当前的位置，即文件的长度
	printf("Length of File is %ld bytes\n", length);	//显示文件长度
	fclose(fp); 
}
