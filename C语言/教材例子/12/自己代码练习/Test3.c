#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


void main()
{
	int i, a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, b[20];
	
	
	FILE *file; 
	//����һ���������ļ�
	if((file = fopen("data.dat", "w+b")) == NULL)
	{
		printf("Open Error!\n");
		exit(0);
	}
	
	
	//д���ݵ�file��
	fwrite(a, sizeof(int), 20, file); 
	fclose(file);
	
	
	
	file = fopen("data.dat", "r");
	//��ȡ���ݵ�����һ������ 
	fread(b, sizeof(int), 20, file);
	
	for(i = 0; i < 20; i++)
		printf("%d\t", b[i]);
		
		
	fclose(file);
	 
	
	
	
} 
