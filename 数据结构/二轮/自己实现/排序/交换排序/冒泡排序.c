#include <stdio.h>

void BubbleSort(int num[], int n)
{
    int i, j, temp, flag;
    for(i = 1; i <= n-1; i++)
    {
        flag = 0;
        for(j = 0; j < n-i; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                flag = 1;
            }
        }

        /*flag放在一趟冒泡之后，如果一趟冒泡之后没有发生交换就说明已经有序*/
        if(flag == 0)
                return;
    }       
}

int main(int argc, char const *argv[])
{
    int num[] = {98, 73, 68, 11, 69, 23, 18};
    BubbleSort(num, 7);
    int i;
    for(i = 0; i < 7; i++)
        printf("%d\t", num[i]);
    return 0;
}
