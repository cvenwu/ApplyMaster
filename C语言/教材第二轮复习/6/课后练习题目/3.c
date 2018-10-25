#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, temp, sum = 0;
    
    for(i = 1; i <= 10; i++)
    {
        temp = 1;
        for(j = 1; j <= i; j++)
            temp = temp * j; 
        sum += temp;
    }

    printf("%d\n", sum);


    return 0;
}
