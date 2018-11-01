#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int getMax(int *num, int n)
{
    int i, max = 0;
    for(i = 0; i < n; i++)
        if(num[max] < num[i])
            max = i;
    
    return max;
}

int getMin(int *num, int n)
{
    int i, min = 0;
    for(i = 0; i < n; i++)
        if(num[min] > num[i])
            min = i;

    return min;
}

int main(int argc, char const *argv[])
{
    int num[3], i;
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    swap(&num[getMax(num, 3)], &num[getMin(num, 3)]);

    for(i = 0; i < 3; i++)
        printf("%d ", num[i]);

    return 0;
}
