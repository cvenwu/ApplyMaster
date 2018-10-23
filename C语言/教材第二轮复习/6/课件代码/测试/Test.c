#include <stdio.h>
#include <stdlib.h>
void main(int argc, char const *argv[])
{
    int i;
    for(i = 0; i <= 9; i++)
    {
        if(i % 2 == 0)
            continue;
        printf("%d\n", i);
    }
    return;
}
