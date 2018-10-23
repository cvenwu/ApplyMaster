//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	FILE *fp1, *fp2;
//	char str[] = "123456789";
//	
//	fp1 = fopen("wang.txt", "w");			//创建文本文件wang.txt
//	if( fp1 == NULL )
//	{
//		printf("can not open file: wang.txt\n");
//		exit(0);
//	}
//	
//	fputs( str, fp1 );						//将字符串"123456789"写入文件
//	fputs("\nabcd", fp1);					//写入第一行文本的换行符和下一行文本
//	fclose(fp1);							//关闭文件
//	
//	
//	fp2 = fopen("wang.txt", "rt");			//以只读方式打开wang.txt文件
//	fgets(str, 8, fp2);						//读取字符串，最大长度是7，将是"1234567" 
//	printf("%s\n", str);
//	fgets(str, 8, fp2);						//读取字符串，最大长度是7，实际上将会是"89\n" 
//	printf("%s\n", str);	
//	fgets(str, 8, fp2);						//读取字符串，最大长度是7，实际上"abcd"
//	printf("%s\n", str);
//	
//	
//	fclose(fp2);							//关闭打开的文件					
//	
// } 





#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1, *fp2;
	char str[] = "123456789";		
	
	fp1 = fopen("wang.txt", "w");		//创建文本文件
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
//	fgets(str, 8, fp2);		//这行代码如果改为fgets(str, 3, fp2);是否会发生变化
	fgets(str, 3, fp2); 
	printf("%s\n", str);
	fgets(str, 8, fp2);
	printf("%s\n", str);
//	fgets(str, 8, fp2);
//	printf("%s\n", str);

	
	fclose(fp2); 
	
	 
}
