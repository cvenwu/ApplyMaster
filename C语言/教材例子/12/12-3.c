//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	FILE *fp1, *fp2;
//	char str[] = "123456789";
//	
//	fp1 = fopen("wang.txt", "w");			//�����ı��ļ�wang.txt
//	if( fp1 == NULL )
//	{
//		printf("can not open file: wang.txt\n");
//		exit(0);
//	}
//	
//	fputs( str, fp1 );						//���ַ���"123456789"д���ļ�
//	fputs("\nabcd", fp1);					//д���һ���ı��Ļ��з�����һ���ı�
//	fclose(fp1);							//�ر��ļ�
//	
//	
//	fp2 = fopen("wang.txt", "rt");			//��ֻ����ʽ��wang.txt�ļ�
//	fgets(str, 8, fp2);						//��ȡ�ַ�������󳤶���7������"1234567" 
//	printf("%s\n", str);
//	fgets(str, 8, fp2);						//��ȡ�ַ�������󳤶���7��ʵ���Ͻ�����"89\n" 
//	printf("%s\n", str);	
//	fgets(str, 8, fp2);						//��ȡ�ַ�������󳤶���7��ʵ����"abcd"
//	printf("%s\n", str);
//	
//	
//	fclose(fp2);							//�رմ򿪵��ļ�					
//	
// } 





#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1, *fp2;
	char str[] = "123456789";		
	
	fp1 = fopen("wang.txt", "w");		//�����ı��ļ�
	if(fp1 == NULL)
	{
		printf("can not open file: wang.txt\n");
		exit(-1);
	}
	
	fputs(str, fp1);
	fputs("\nabcd", fp1);
	fclose(fp1);
	
	fp2 = fopen("wang.txt", "rt");		
	fgets(str, 8, fp2);
	printf("%s\n", str);
//	fgets(str, 8, fp2);		//���д��������Ϊfgets(str, 3, fp2);�Ƿ�ᷢ���仯
	fgets(str, 3, fp2); 
	printf("%s\n", str);
	fgets(str, 8, fp2);
	printf("%s\n", str);
//	fgets(str, 8, fp2);
//	printf("%s\n", str);

	
	fclose(fp2); 
	
	 
}
