#include <stdio.h>
void main()
{
	int i;
	double pi = 1.0, z = 2.0, m = 1;
	for(i = 0; i < 100; i++)
	{
		pi *= (z / m);
		if(z > m)
			m += 2;
		else
			z += 2;
			

	}
	
	pi *= 2;
	printf("%lf\n", pi);
	
}
