#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch;
	
	if(argc != 2)							//������������ 
	{
		printf("the number of arguments not correct\n\n");
		printf("Usage: ��ִ���ļ��� filename \n");
		exit(0);
	}
	
	if((fp1 = fopen(argv[1], "wt")) == NULL)	//���ļ�ʧ��
	{
		printf("can not open this file\n");
		exit(0);
	 } 
	 
	for( ; (ch = getchar()) != '@' ; )
	{
		fputc(ch, fp1);							//�����ַ����洢���ļ��� 
	}
	fclose(fp1);								//�ر��ļ�
	
	//˳������ļ�������
	fp2 = fopen(argv[1], "rt");
	for( ; (ch = fgetc(fp2) != EOF) ; )
		putchar(ch);							//˳����벢��ʾ 
	fclose(fp2);								//�رմ򿪵��ļ� 
}
