#include <stdio.h>


void QuickSort(int num[], int low, int high)
{
    if(low < high)
    {
        int pivot = Partition(num, low, high);
        QuickSort(num, low, pivot-1);
        QuickSort(num, pivot+1, high);
    }
}


int Partition(int num[], int low, int high)
{
    int pivot = num[low];
    while(low < high)
    {
        while(low < high && num[high] > pivot)
            high--;
        num[low] = num[high];
        while(low < high && num[low] < pivot)
            low++;
        num[high] = num[low];
    }
    

    num[low] = pivot;
    return low;


}



/*
void QuickSort(int num[], int low, int high)
{
    if(low < high)
    {
        int pivotpos = Partition(num, low, high);
        QuickSort(num, low, pivotpos-1);
        QuickSort(num, pivotpos+1, high);
    }
    
}


int Partition(int num[], int low, int high)
{
    int pivot = num[low];
    while(low < high)
    {
        while(low < high && num[high] >= pivot)
            --high;
        num[low] = num[high];
        while(low < high && num[low] <= pivot)
            ++low;
        num[high] = num[low];                       
    }

    num[low] = pivot;
    return low;
}
*/
int main(int argc, char const *argv[])
{
    int num[] = {0, 98, 73, 68, 11, 69, 23, 18};
    QuickSort(num, 1, 7);
    int i;
    for(i = 1; i <= 7; i++)
        printf("%d\t", num[i]);
    return 0;
}
