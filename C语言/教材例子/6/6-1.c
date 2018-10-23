#include <stdio.h>

void main()
{
    int i = 1, sum = 0;

    while( i <= 100 )
    {
        sum += i;
        i++;
    }

    printf("sum = %d\n", sum);

}
