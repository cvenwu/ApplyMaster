#include <stdio.h>

#define MAXSIZE 20				/*存储空间初始分配量*/
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 10                  /*用于要排序数组中元素个数的最大值，可以根据需要进行修改*/

typedef int Status;
typedef struct {
    int r[MAXSIZE + 1];             /*用于存储要排序的数组，r[0]用作哨兵或者临时变量*/
    int length;
} SqList;


/*排序中常用的操作就是数组两元素的交换,这里特意写成函数*/
void swap(SqList *L, int i, int j)
{
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

/*冒泡排序*/
/*对顺序表L作交换排序(冒泡排序初级版)*/
void BubbleSort0(SqList *L)
{
    int i, j;
    for(i = 1; i < L->length; i++)
    {
        for(j = i + 1; j <= L->length; j++)
        {
            if(L->r[i] > L->r[j])
                swap(L, i, j);                          /*交换L->r[i]与L->r[j]的值*/
        }
    }
}


/*正宗的冒泡排序*/
/*对顺序表L作冒泡排序*/
void BubbleSort(SqList *L)
{
    int i, j;
    for(i = 1; i < L->length; i++)
    {
        for(j = L->length - 1; j >= i; j--)         /*注意j是从后往前面进行巡捐*/
        {
            if(L->r[j] > L->r[j+1])                 /*若前者大于后者(注意这里与上一算法差异)*/
                swap(L, j, j+1);                    /*交换L->r[j]与L->r[j+1]的值*/
        }
    }
}


/*对顺序表做改进的冒泡排序*/
void BubbleSort2(SqList *L)
{
    int i, j;
    Status flag = TRUE;             /*flag用来作为标记*/
    for(i = 1; i < L->length && flag; i++)          /*若flag为true则退出循环*/
    {
        flag = FALSE;
        for(j = L->length - 1; j >= i; j--)
        {
            if(L->r[j] > L->r[j+1])
            {
                swap(L, j, j+1);                /*交换L->r[j]与L->r[j+1]的值*/
                flag = TRUE;                    /*如果有数据交换，则flag为true*/
            }
        }
    }
}


/*简单选择排序*/
void SelectSort(SqList *L)
{
    int i, j, min;
    for(i = 1; i < L->length; i++)
    {
        min = i;                                    /*将当前下标定义为最小值下标*/
        for(j = i+1; j <= L->length; j++)           /*循环之后的数据*/
        {
            if(L->r[min] > L->r[j])                 /*如果有小于当前最小值的关键字*/
                min = j;                            /*将此关键字的下标赋值给min*/
        }
        if(i != min)                                /*若min不等于i,说明找到最小值,进行交换*/
            swap(L, i, min);                        /*交换L->r[i]与L->r[min]的值*/
    }
}



/*对顺序表L作直接插入排序*/
void InsertSort(SqList *L)
{
    int i, j;
    for(i = 2; i <= L->length; i++)
    {
        if(L->r[i] < L->r[i-1])             /*需将L->r[i]插入有序子表*/
        {
            L->r[0] = L->r[i];
            for(j = i - 1; L->r[j] > L->r[0]; j--)
                L->r[j+1] = L->r[j];        /*记录后移*/
            L->r[j+1] = L->r[0];            /*插入到正确位置*/
        }
    }
}


/*对顺序表L作希尔排序*/
void ShellSort(SqList *L)
{
    int i, j;
    int increment = L->length;
    do {
        increment = increment / 3 + 1;      /*增量序列*/
        for(i = increment + 1; i <= L->length; i++)
        {
            if(L->r[i] < L->r[i-increment])
            {
                /*需将L->r[i]插入有序增量子表*/
                L->r[0] = L->r[i];               /*暂存在L->r[0]*/
                for(j = i - increment; j > 0 && L->r[0] < L->r[j]; j -= increment)
                    L->r[j + increment] = L->r[j];          /*记录后移，查找插入位置*/
                L->r[j+increment] = L->r[0];                /*插入*/    
            }
        }
    }
    while(increment > 1);
}


/*堆排序*/
void HeapSort(SqList *L)
{
    int i;
    for(i = L->length / 2; i > 0; i--)          /*把L中的r构建成一个大顶锥*/
        HeapAdjust(L, i, L->length);

    for(i = L->length; i > 1; i--)
    {
        swap(L, 1, i);                          /*将锥顶记录和当前未经排序子序列的最后一个记录进行交换*/
        HeapAdjust(L, 1, i-1);                  /*将L->r[1...i-1]重新调整为大顶锥*/
    }   
}

/*已知L->r[s..m]中记录的关键字除L->r[s]之外均满足堆的定义*/
/*本函数调整L->r[s]的关键字，使L->r[s..m]成为一个大顶锥*/
void HeapAdjust(SqList *L, int s, int m)
{
    int temp, j;
    temp = L->r[s];
    for(j = 2 * s; j <= m; j *= 2)                  /*沿关键字较大的孩子结点搜寻*/
    {
        if(j < m && L->r[j] < L->r[j + 1])          /*j为关键字中较大记录的下标*/
            ++j;
        if(temp >= L->r[j])
            break;                                  /*rc应插入在位置s上*/
        L->r[s] = L->r[j];
        s = j;
    }

    L->r[s] = temp;                                 /*插入*/
}

void main(int argc, char const *argv[])
{
    
    return 0;
}
