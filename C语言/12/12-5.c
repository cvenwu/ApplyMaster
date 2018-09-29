#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void main()
{
	FILE *fp;
	short i, a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	fp = fopen("wang.dat", "wb");
	if(fp == NULL)
	{
		printf("cann't create file : wang.txt\n");
		exit(0);
	}
	
	fwrite(a, sizeof(short), 10, fp);				//将数组的10个整型数写入到文件中
	fclose(fp);
	
	
	fp = fopen("wang.dat", "rb"); 					//打开二进制文件wang.bat
	if(fp == NULL)
	{
		printf("can not open file: wang.dat\n");
		exit(0);
	}
	
	memset(a, 0, 10 * sizeof(short));				//将数组a的10个元素清0
	fread(a, sizeof(short), 10, fp);				//从文件中读取10个整型数据到数组a
	fclose(fp);										//关闭文件
	
	
	for(i = 0; i < 10; i++)							//显示数组a的元素 
		printf("%d", a[i]);							 
}
