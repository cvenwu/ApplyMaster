#include <stdio.h>
void main()
{
	int n = 0;
	printf("Please input the number of diskes : ");
	scanf("%d", &n);
	
	
	hannuo(n,'A', 'B', 'C');	//���Ӹ�������㣬�н飬�յ� 
}


void hannuo(int n, char A, char B, char C)
{
	if(n == 1)
		move(A, C); 
	else
	{
		hannuo(n-1, A, C, B);
		move(A, C);
		hannuo(n-1, B, A, C);
	}
}

void move(char A, char B)
{
	printf("%c------------------> %c\n", A, B);
	return 0;
}

