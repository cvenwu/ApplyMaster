#include <stdio.h>
void main()
{
	char ch;
	ch = getch();
	switch(ch)
	{	
		case 'Y':
				printf("Yes\n");
				break;
		default:
				printf("Yes,No or All\n");
				break;
		case 'N':
				printf("No\n");
				break;
		case 'A':
				printf("All\n");
				break; 
	}
} 
