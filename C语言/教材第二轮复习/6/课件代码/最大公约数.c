#include <stdio.h>
#include <stdlib.h>
void main(int argc, char const *argv[])
{
    int m, n, r;
    printf ("Please input two positive integer: ");
    // scanf ("%d%d", &m, &n);
    m = 24, n = 56;
    while((r = m % n) != 0)
        m = n, n = r;

    printf ("Their greatest common divisor is %d\n", n);


    return;
}
