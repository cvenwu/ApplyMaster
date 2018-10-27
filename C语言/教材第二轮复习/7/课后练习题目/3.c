#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num[10], i, min, max, temp;
    for(i = 0; i <= 9; i++)
        scanf("%d", &num[i]);

    min = num[0];
    max = min;
    for(i = 0; i <= 9; i++)
    {
        if(num[min] > num[i])
            min = i;
        if(num[max] < num[i])
            max = i;
    }

    temp = num[min];
    num[min] = num[max];
    num[max] = temp;

    for(i = 0; i <= 9; i++) 
        printf("%d\t", num[i]);
    return 0;
}