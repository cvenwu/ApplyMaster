#include <stdio.h>
#include <math.h>
#include <conio.h>


int sum();			//����sum������ԭ�� 

void main()
{
	int tot;
	
	tot = sum();		//����sum����
	if(tot == -1)
		printf("\nnot select!\n");
	else
		printf("\nthe result is : %d\n", tot);
}

int sum()				//�����Ķ��壬�޲����з���ֵ 
{
	int i, tot = 0;
	char key;
	
	key = getche();
	if(key != '0' && key != '1')
		return (-1);			//Ҳ����д��return -1; 
	
	for(i = (key == '0') ? 2 : 1; i <= 100; i += 2)
		tot += i;
	
	return (tot);			//Ҳ����д��return tot; 
	 
}
