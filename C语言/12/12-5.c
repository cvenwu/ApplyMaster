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
	
	fwrite(a, sizeof(short), 10, fp);				//�������10��������д�뵽�ļ���
	fclose(fp);
	
	
	fp = fopen("wang.dat", "rb"); 					//�򿪶������ļ�wang.bat
	if(fp == NULL)
	{
		printf("can not open file: wang.dat\n");
		exit(0);
	}
	
	memset(a, 0, 10 * sizeof(short));				//������a��10��Ԫ����0
	fread(a, sizeof(short), 10, fp);				//���ļ��ж�ȡ10���������ݵ�����a
	fclose(fp);										//�ر��ļ�
	
	
	for(i = 0; i < 10; i++)							//��ʾ����a��Ԫ�� 
		printf("%d", a[i]);							 
}
