#include <stdio.h>
void main()
{
	printf("*****Time*****\n");
	printf("1\tmorning\n");
	printf("2\tafternoon\n");
	printf("3\tnight\n");
	printf("Please enter your choice:");
	char ch;
	scanf("%c", &ch);
	switch(ch)
	{
		case '1': printf("Good morning\n"); break;
		case '2': printf("Good afternoon\n"); break;
		case '3': printf("Good night\n"); break;
		default: printf("Selection error!\n"); break;
	}
	
	
}
