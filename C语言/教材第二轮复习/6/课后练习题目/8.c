#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int x, sum = 0;
    printf("Please input an integer : ");
    scanf("%d", &x);
    if(x < 0)
        x = x * (-1);
    
    while( x / 10 )
    {
        sum += (x % 10);
        x = x / 10;
    }

    sum += x;
    printf("%d\n", sum);
    return 0;
}
