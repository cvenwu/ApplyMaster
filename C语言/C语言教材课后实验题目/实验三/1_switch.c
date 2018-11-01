#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y;
    printf("Please input x :");
    scanf("%lf", &x);

    if(x < 0)
        y = 0;
    else 
        switch((int)x / 10)
        {
            case 0: y = x; break;
            case 1: y = 10; break;
            case 2: case 3: y = 20 - 0.5 * x; break;
        }
    
    return 0;
}
