#include <stdio.h>


void print(int w);


void main()
{
	print(3);
}

void print(int w)		//�ݹ麯��
{
	int i;
	if( w != 0 )
	{
		print(w - 1);
		for(i = 1; i <= w; ++i)
			printf("%d ", w);
		printf("\n");	
	}	
}
