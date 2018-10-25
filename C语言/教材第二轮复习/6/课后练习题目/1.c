#include <stdio.h>
void main(int argc, char const *argv[])
{
    int i = 2, sum = 0;
    while( i <= 100)
    {
        sum += i;
        i += 2;
    }

    printf("%d\n", sum);
    return;
}
