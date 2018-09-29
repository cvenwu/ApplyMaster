/*


#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i = 3;
	float f = (float)9.8;
	FILE *fp;
	
	fp = fopen("wang.txt", "w");		//�����ı��ļ�wang.txt
	if(fp == NULL)
	{
		printf("cann't create file: wang.dat\n");
		exit(0); 
	}
	
	fprintf(fp, "%2d,%6.2f", i, f);		//������i��f��ֵ��ʽ��������ļ���
	fclose(fp);							//�ر��ļ� 
	
	
	fp = fopen("wang.txt", "r");		//�Զ��ķ�ʽ���ļ�wang.txt
	if(fp == NULL)
	{
		printf("can't open file: wang.dat\n");
		exit(0);
	}
	
	i = 0;
	f = 0;
	fscanf(fp, "%d,%f", &i, &f);		//���ļ��ж�ȡ��ֵ������i��f
	fclose(fp);							//�ر��ļ�
	
	printf("i=%2d,f=%6.2f\n", i, f);	//��ʾ���ļ��ж�ȡ�ı���i��f��ֵ 
}


*/


#include <stdio.h>
#include <stlib.h>
#include <memory.h>

#define NUM 10

void main()
{
	int i = 3;
	float f = (float) 9.8;
	FILE *fp;
	
	
	fp = fopen("wang.txt", "w");		//�����ı��ļ�wang.txt 
	if(fp == NULL)
	{
		printf("cann't create file: wang.dat\n");
		exit(0);
	}
	
	fprintf(fp, "%2d, %6.2f", i, f);	//������i��f��ֵ��ʽ��������ļ���
	fclose(fp);							//�ر��ļ�
	
	fp = fopen("wang.txt", "r");		//�Զ��ķ�ʽ���ļ�wang.txt
	if(fp == NULL)
	{
		printf("cann't open file: wang.dat\n");
		exit(0);	
	}
	
	i = 0;
	f = 0;
	fscanf(fp, "%d, %f", &i, &f);
	fclose(fp);
	
	printf("i = %2d, f = %6.2f\n", i, f);		
} 
