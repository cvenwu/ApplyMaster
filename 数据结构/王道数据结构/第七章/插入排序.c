#include <stdio.h>

#define ElemType int

/*直接插入排序*/
void InsertSort(ElemType A[], int n)
{
    int i, j;
    for(i = 2; i <= n; i++)                             //依次将A[2]~A[n]插入到前面已排序序列
        if(A[i].key < A[i-1].key)                       //若A[i]的关键码小于其前驱，需将A[i]插入有序表
        {                   
            A[0] = A[i];                                //复制为哨兵,A[0]不存放元素
            for(j = i-1; A[0].key < A[j].key; --j)      //从后往前查找待插入位置
                A[j+1] = A[j];                          //向后挪位
            A[j+1] = A[0];                              //复制到插入位置
        }
}

/*折半插入排序*/
void InsertSort2(ElemType A[], int n)
{
    int i, j, low, high, mid;
    for(i = 2; i <= n; i++)
    {
        A[0] = A[i];                            //依次将A[2]~A[n]插入到前面已排序序列
        low = 1;
        high = i - 1;                           //设置折半查找的范围
        while(low <= high)                      //折半查找(默认递增有序)
        {
            mid = (low + high) / 2;             //取中间点
            if(A[mid].key > A[0].key)
                high = mid - 1;                 //查找左半子表
            else
                low = mid + 1;                  //查找右半子表
        }

        for(j = i - 1; j >= high+1; --j)        //统一后移元素，空出插入位置
            A[j+1] = A[j];
        A[high+1] = A[0];                       //插入操作
    }
}

/*希尔排序*/
void ShellSort(ElemType A[], int n)
{
//对顺序表做希尔插入排序，本算法和直接插入排序相比，作了以下修改
//1.前后记录位置的增量是dk,不是1
//2.r[0]只是暂存单元，不是哨兵，当j<=0时，插入位置已到
    for(dk = n / 2; dk >= 1; dk = dk / 2)                           //步长变化
    {
        for(i = dk + 1; i <= n; ++i)
        {
            if(A[i].key < A[i-dk].key)                              //需将A[i]插入有序增量子表
            {
                A[0] = A[i];                                        //暂存在A[0]
                for(j = i - dk; j > 0 && A[0].key < A[j].key; j-=dk)
                    A[j+dk] = A[j];                                 //记录后移，查找插入的位置
                A[j+dk] = A[0];                                     //插入
            }
        }
    }
}



void main(int argc, char const *argv[])
{
    



    return;
}
