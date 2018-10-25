#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for(i = 1; i <= 9; i++)
    {
        printf("%d-----: ", i);
        for(j = 1; j <= 9; j++)
            printf("\t%d*%d=%d\t", i, j, i * j);
        printf("\n");
    }
    return 0;
}
