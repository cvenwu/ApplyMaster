#include <stdio.h>


void BinaryInsert(int num[], int n)
{
    int i, j, low, high, mid;
    for(i = 2; i <= 7; i++)
    {
        low = 1, high = i-1, num[0] = num[i];
        while(low < high)
        {
            mid = (low + high) / 2;
            if(num[0] > num[mid])
                low = mid + 1;
            if(num[0] < num[mid])
                high = mid - 1;
        }

        for(j = i-1; j >= low; j--)
            num[j+1] = num[j];
        
        num[low] = num[0];
    }

    
}


int main(int argc, char const *argv[])
{
    int num[] = {0, 98, 73, 68, 11, 69, 23, 18};
    BinaryInsert(num, 8);
    int i;
    for(i = 1; i <= 7; i++)
        printf("%d\t", num[i]);
    return 0;
}