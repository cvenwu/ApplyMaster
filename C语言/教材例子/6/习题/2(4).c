#include <stdio.h>
void main()
{
	int y = 10;
	do {
		printf("%d\t",y);
		y--;
		printf("%d\n",y);
	} while(--y);
	printf("------%d\n",y);
	
	printf("%d\n", y--);
	printf("%d\n",y);
	
	
	
	
	int a = printf("123456789qwe");
	printf("%d\n",a);
}
