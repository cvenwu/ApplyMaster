#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num, i;
    for(i = 100; i < 1000; i++)
        if(i == (((i / 100) * (i / 100) * (i / 100)) + ((i / 10 % 10) * (i / 10 % 10) * (i / 10 % 10)) + ((i % 10) * (i % 10) * (i % 10))))
            printf("%d\n", i);
    return 0;
}
