#include <stdio.h>
#include <math.h>
int isPrimeNumber(int num);	 

void main()
{
	int num;
	printf("������һ��������");
	scanf("%d", &num);
	if(isPrimeNumber(num) == 1)
		printf("������!\n");
	else
		printf("��������!\n");
}


int isPrimeNumber(int num)
{
	int i;
	for(i = 2; i <= sqrt(num); i++)
		if(num % i == 0)
			return 0;
	
	return 1;
}
