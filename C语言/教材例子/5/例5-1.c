#include <stdio.h>
void main()
{
	char ch, ch1, ch2;
	ch = getche();
	putchar('\n');
	ch1 = ch == 'a' ? 'z' : ch - 1;//��ǰ���ַ�
	ch2 = ch == 'z' ? 'a' : ch + 1;//�����ַ�	
	printf("ǰ����%c\t �����%c\n", ch1, ch2);
	
	
}
 
