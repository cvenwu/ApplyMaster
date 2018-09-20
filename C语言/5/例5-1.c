#include <stdio.h>
void main()
{
	char ch, ch1, ch2;
	ch = getche();
	putchar('\n');
	ch1 = ch == 'a' ? 'z' : ch - 1;//求前驱字符
	ch2 = ch == 'z' ? 'a' : ch + 1;//求后继字符	
	printf("前驱是%c\t 后继是%c\n", ch1, ch2);
	
	
}
 
