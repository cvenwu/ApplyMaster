#include <stdio.h>
#include <stdlib.h>

//选择排序
void SelectionSort(int Array[], int n)
{
    int i, j;
    for(i = 1; i < n; i++)
    {
        Array[0] = i;
        for(j = i+1; j <= n; j++)
        {
            if(Array[j] < Array[0])
                Array[0] = j;
        }
        Array[0] = Array[Array[0]];
        Array[Array[0]] = Array[i];
        Array[i] = Array[Array[0]];
    }
}

int main(int argc, char const *argv[])
{
    int a[] = { 0, 50, 10, 90, 30, 70, 40, 50, 60, 80};
    return 0;
}
