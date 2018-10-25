#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, n, a, sum = 0, temp = 0;
    printf("Please input n and a : ");
    scanf("%d %d", &n, &a);
    for(i = 1; i <= n; i++)
    {
        temp = 0;
        for(j = 1; j <= i; j++)
            temp = temp * 10 + a;
        sum += temp;
    }

    printf("%d\n", sum);
    

    return 0;
}
