#include <stdio.h>
void main()
{
	FILE *file, *file2; 
	
	char inputFile[80], outputFile[80], ch;
	
	printf("Please input the file name you want to copy: ");
	gets(inputFile);
	
	
	//���ȴ��ļ� 
	if((file = fopen(inputFile, "r+t")) == NULL)
	{
		printf("Open input file Error!\n");
		exit(-1);
	}
	
	printf("Please input the file name you want to copy: ");
	gets(outputFile);

	if((file2 = fopen(outputFile, "w+t")) == NULL)
	{
		printf("Open output file Error!\n");
		exit(-1);
	}
	
	
	/* 
	while((ch = fgetc(file)) != EOF)
	{
		fputc(ch, file2);
	}
	*/
	
	//����ע�͵Ĵ���Ҳ������ôд
	while(!feof(file))
	{
		fputc(fgetc(file), file2);
	} 
	
	
	//��ʼ�ر��ļ� 
	if(fclose(file))
	{
		printf("Close input file Error!\n");
		exit(-1);
	}
	
	if(fclose(file2))
	{
		printf("Close output file Error!\n");
		exit(-1);
	}
} 
