#include <stdio.h>
#include <stdlib.h>

void main()
{
	long k, min, max, count[10] = {0};
	char str[9];
	int i;
	
	//������С�������
	printf("input the first number: ");
	scanf("%ld", &min);
	
	printf("input the last number: ");
	scanf("%ld", &max);
	
	if(min > max)
	{
		printf("\ninput errpr!");
		return;
	}
	
	//ͳ�Ƹ����ֳ��ֵĴ���
	for(k = min; k < max; k++)
	{
		sprintf(str, "%8d", k);		//��������ת��Ϊ�ַ���,����str��
		for(i = 7; i >= 0 && str[i] != ' '; i--)
			count[str[i] - '0']++;
	}	

	for(i = 0; i < 10; i++)
	{
		printf("%d--(%ld)   ", i, count[i]);
		if(i == 4)
			printf("\n");
	}
	
	printf("\n");
} 
