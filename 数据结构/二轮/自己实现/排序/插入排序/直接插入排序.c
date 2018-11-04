#include <stdio.h>

/*自己实现直接插入排序*/
void insertSort(int num[], int n)
{
    int i, j;
    for(i = 2; i <= n - 1; i++)
    {
        num[0] = num[i];
        for(j = i-1; j >= 1; j--)
            if(num[0] < num[j])
                num[j+1] = num[j];
            else           
                break;
        num[j+1] = num[0];
    }
}

/*自己实现直接插入排序2*/
void insertSort2(int num[], int n)
{
    int i, j;
    for(i = 2; i <= n-1; i++)
    {
        j = i, num[0] = num[i];
        while(num[0] < num[j] && j >= 1)
        {
            num[j+1] = num[j];
            j--;
        }
        num[j+1] = num[0];
    }
}

/*王道上的直接插入排序*/
void insertSort3(int num[], int n)
{
    int i, j;
    for(i = 2; i <= n; i++)
    {
        if(num[i] < num[i-1])
        {
            num[0] = num[i];
            for(j = i-1; num[j] > num[0]; j--)
                num[j+1] = num[j];
            num[j+1] = num[0];
        }
    }
}

void main(int argc, char const *argv[])
{
    int num[] = {0, 98, 73, 68, 11, 69, 23, 18};
    insertSort2(num, 8);
    int i;
    for(i = 1; i <= 7; i++)
        printf("%d\t", num[i]);
}
