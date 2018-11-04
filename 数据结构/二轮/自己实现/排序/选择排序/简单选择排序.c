#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

/*自己实现的选择排序*/
void SelectSort(int num[], int n)
{
    int i, j, min;
    for(i = 0; i < n; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
            if(num[min] > num[j])
                min = j;
        
        if(min != i)
            swap(&num[i], &num[min]);
    }
}

int main(int argc, char const *argv[])
{
    int num[] = {98, 73, 68, 11, 69, 23, 18};
    SelectSort(num, 7);
    int i;
    for(i = 0; i < 7; i++)
        printf("%d\t", num[i]);
    return 0;
}
