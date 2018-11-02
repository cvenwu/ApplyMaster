#include <stdio.h>
void main(int argc, char const *argv[])
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("a = %d, b = %d", &a, &b);
    scanf("x = %f, y = %e", &x, &y);
    scanf("c1 = %c, c2 = %c", &c1, &c2);

    printf("%d %d %f %e %c %c", a,b,x,y,c1,c2);

    return;
}
