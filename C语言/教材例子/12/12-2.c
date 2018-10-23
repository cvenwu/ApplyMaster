#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	FILE *input, *output;					//input��Դ�ļ�ָ��, output��Ŀ���ļ�ָ��
	
	if( argc != 3 )
	{
		printf("the number of arguments not correct\n");
		printf("\n Usage: ��ִ���ļ��� source-file dest-file");
		exit(0);	
	}
	
	if( (input = fopen(argv[1], "r")) == NULL)		//��Դ�ļ�ʧ�� 
	{
		printf("can not open source file\n");
		exit(0);
	}
	
	if( (output = fopen(argc[2], "w")) == NULL)		//����Ŀ���ļ�ʧ�� 
	{
		printf("can not create destination file\n");
		exit(0);	
	} 
	
	
	//����Դ�ļ���Ŀ���ļ���
	for( ; (!feof(input)) ; )
		fputc(fgetc(input), output);
	
	fclose(input);									//�ر�Դ�ļ� 
	fclose(output);									//�ر�Ŀ���ļ� 
	
	
}
