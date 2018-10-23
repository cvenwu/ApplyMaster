#include <stdio.h>
void main()
{/*
	int a[3];
	scanf("%d", a);
	
	
	
	printf("\n%d\n", a[0]);
	printf("%d\n", sizeof(short));		//2字节 
	*/
	
	//两个同型数组的赋值
	
	
	int b[5] = { 1,3,5,7,9 };
	int c[5];
	memcpy(c, b, 20);
	
	int i;
	for(i = 0; i < 5; i++)
		printf("%d\t", c[i]); 
	
 } 
