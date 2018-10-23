#include <stdio.h>
enum color { red, white, blue };

void main()
{
	static enum color flag[20] = { white, red, red, blue, white, red, blue, blue, white, blue, red, red, white, red, blue, white, blue, red, blue, white };
	
	enum color temp;
	int rr, lb, nx, i;
	
	rr = -1;
	lb = 20;
	nx = 0;
	while( nx != lb )
	{
		switch(flag[nx])
		{
			case red: 	rr++;
					 	temp = flag[nx];
					 	flag[nx] = flag[rr];
					 	flag[rr] = temp;
					 	nx++;
					 	break;
			case white:	nx++;
						break;
			case blue:	lb--;
						temp = flag[nx];
						flag[nx] = flag[lb];
						flag[lb] = temp;
						break;
		}
	}
	
	for( i = 0; i < 20; i++)	//ÏÔÊ¾½á¹û
	{
		switch(flag[i])
		{
			case red:	putchar('r');
						break;
			case white:	putchar('w');
						break;
			case blue:	putchar('b');
						break;	
		}	
	} 
	


}
	
