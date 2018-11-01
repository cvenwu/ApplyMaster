#include <stdio.h>
void main(int argc, char const *argv[])
{

    int num[50], n, i, j, count, temp;
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &num[i]);
        if(num[i] == -1)
            break;
    }

    n = i;

    for(i = 0; i < n; i++)
    {
        if(num[i] % 2 == 0 && num[i] / 10 % 2 == 0 && num[i] / 100 % 2 == 0 && num[i] / 1000 % 2 == 0)
            count++;
        else
            continue;
    }

    for(i = 1; i <= n-1; i++)
    {
        for(j = 0; j <= n - i; j++)
        {
            if(num[j] < num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        printf("%d\t", num[i]);


}
