#include <stdio.h>

long fact(int n);

void main()
{
	int n;
	long L;
	
	
	scanf("%d", &n);
	L = fact(n);
	printf("%d!=%ld", n, L);
}


long fact(int n)				//µÝ¹éº¯Êý£¬Çón!
{
	long L;
	if(n == 1)
		return 1;
	
	L = n * fact(n - 1);
	return L;
 } 
