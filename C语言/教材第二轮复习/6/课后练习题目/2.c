#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0, i = 1;
    while(i <= 99)
    {
        sum = sum + i * (i + 1) * (i + 2);
        i += 2;
    }

    printf("%d\n", sum);
    return 0;
}
