#include <stdio.h>

#define ElemType int

/*直接插入排序*/
void InsertSort(ElemType A[], int n)
{
    int i,j;
	for(i = 1; i <= n; i++)
    	printf("%d\t", A[i]);
    printf("\n");
    for(i = 2; i <= n; i++)
    {
    	if(A[i] < A[i-1])
    	{
    		A[0] = A[i];
        	for(j = i - 1; A[0] < A[j]; --j)
            	A[j+1] = A[j];
        	A[j+1] = A[0];
		} 
    }
}


void insertSort(ElemType Array[], int n)
{
    int i, j;
    for(i = 2; i <= n; i++)
    {
        if(Array[i] < Array[i-1])
        {
            j = i-1;
            Array[0] = Array[i];
            while(Array[0] < Array[j] && j >= 1)
            {
                Array[j+1] = Array[j];
                j--;
            }
            Array[j+1] = Array[0];
        }
        else
            continue;
    }
}


/*折半插入*/
void BinaryInsertSort(ElemType A[], int n)
{
    
    int i, j, low, mid, high;

    
    for(i = 2; i <= n - 1; i++)
    {
        low = 1;
        high = i - 1;
        A[0] = A[i];
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(A[mid] > A[0])
                high = mid - 1;
            else
                low = mid + 1;
        }

        for(j = i-1; j >= high + 1; j--)
            A[j+1] = A[j];
        
        A[high+1] = A[0];
    }

}

/*希尔排序*/
void ShellSort(ElemType A[], int n)
{
    int dk, i, j, k;

    for(dk = n / 2; dk >= 1; dk /= 2)
        for(i = dk + 1; i <= n-1; ++i)
            if(A[i] < A[i-dk])
            {
                A[0] = A[i];
                for(j = i - dk; j > 0 && A[0] < A[j]; j -= dk)
                    A[j+dk] = A[j];
                A[j+dk] = A[0];
            }
}




/*
void ShellSort(ElemType A[], int n)
{
    int dk, i, j, k;



    for(dk = n / 2; dk >= 1; dk /= 2)
    {
        printf("\n dk = %d \n", dk);
        for(i = dk + 1; i <= n-1; ++i)
        {
            printf("\t\ti = %d时 : \n", i);
            if(A[i] < A[i-dk])
            {
                A[0] = A[i];
                for(j = i - dk; j > 0 && A[0] < A[j]; j -= dk)
                {
                    printf("\t\t\t\tj = %d时 : \n", j);
                    for(k = 0; k <= 10; k++)
    	                printf("%d\t", A[k]);
                    printf("\n");
                    printf("将%d 和 %d 进行交换\n", A[j+dk], A[j]);
                    A[j+dk] = A[j];
                    printf("交换后为:\n");
                    for(k = 0; k <= 10; k++)
    	                printf("%d\t", A[k]);
                    printf("\n");
                }
                    
                A[j+dk] = A[0];
            }
        }
            

        for(i = 0; i <= n - 1; i++)
            printf("%d\t", A[i]);
        printf("\n");
    }
}
*/
void main(int argc, char const *argv[])
{
    int a[] = { 0, 50, 10, 90, 30, 70, 40, 50, 60, 80};
    insertSort(a, 9);
    // BinaryInsertSort(a, 10);
    int b[] = { 0, 98, 36, -9, 0, 47, 23, 1, 8, 10, 7};
    // ShellSort(b, 11);
    int i;

    for(i = 0; i <= 9; i++)
    	printf("%d\t", a[i]);
    printf("\n");/*
    for(i = 0; i <= 9; i++)
    	printf("%d\t", a[i]);
    printf("\n");*/


    return;
}
