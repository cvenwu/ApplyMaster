#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	FILE *input, *output;					//input：源文件指针, output：目标文件指针
	
	if( argc != 3 )
	{
		printf("the number of arguments not correct\n");
		printf("\n Usage: 可执行文件名 source-file dest-file");
		exit(0);	
	}
	
	if( (input = fopen(argv[1], "r")) == NULL)		//打开源文件失败 
	{
		printf("can not open source file\n");
		exit(0);
	}
	
	if( (output = fopen(argc[2], "w")) == NULL)		//创建目标文件失败 
	{
		printf("can not create destination file\n");
		exit(0);	
	} 
	
	
	//复制源文件到目标文件中
	for( ; (!feof(input)) ; )
		fputc(fgetc(input), output);
	
	fclose(input);									//关闭源文件 
	fclose(output);									//关闭目标文件 
	
	
}
