#include <stdio.h>
#include <stdlib.h>
void main(int argc, char const *argv[])
{
    int x, y;
    printf("Please input the value of x : ");
    scanf("%d", x);
    if(x < 0)
        printf("0\n");
    else if((x < 10) &&  (x >= 0))
        printf("%d\n", x);
    else if((x >= 10) && (x < 20))
        printf("%d\n", 10);
    else
        printf("%lf\n", 20 - 0.5 * x);
    return;
}
