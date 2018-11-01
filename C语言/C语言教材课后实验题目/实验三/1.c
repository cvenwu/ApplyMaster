
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y;
    printf("Please input x : ");
    scanf("%lf", &x);
    if(x < 0)
        y = 0;
    else if(0 <= x < 10)
        y = x;
    else if(10 <= x < 20)
        y = 10;
    else if(20 <= x < 40)
        y = 20 - 0.5 * x;
    
    
    return 0;
}
