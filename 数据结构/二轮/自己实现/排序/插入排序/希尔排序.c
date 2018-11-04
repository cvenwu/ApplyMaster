#include <stdio.h>

void ShellSort(int num[], int n)
{
    int dk, i, j;

    //确定步长
    for(dk = n / 2; dk >= 1; dk /= 2)
    {
        //使用直接插入排序法
        for(i = dk + 1; i <= n; i++)
        {
            if(num[i] < num[i-dk])
            {
                num[0] = num[i];
                for(j = i-dk; j > 0 && num[j] > num[i]; j -= dk)
                    num[j+dk] = num[j];
                num[j+dk] = num[0];
            }
        }
    }
}












/*
void ShellSort(int num[], int n)
{
    int dk, i, j;
    for(dk = n / 2; dk >= 1; dk /= 2)
        for(i = dk+1; i <= n; i++)
            if(num[i] < num[i-dk])
            {
                num[0] = num[i];
                for(j = i - dk; j > 0 && num[0] < num[j]; j -= dk)
                    num[j+dk] = num[j];
                num[j+dk] = num[0];
            }
}
*/

int main(int argc, char const *argv[])
{
    int num[] = {0, 98, 73, 68, 11, 69, 23, 18};
    ShellSort(num, 8);
    int i;
    for(i = 1; i <= 7; i++)
        printf("%d\t", num[i]);
    return 0;
}
