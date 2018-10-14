#include <stdio.h>


#define MAXSIZE 10                  /*用于要排序数组中元素个数的最大值，可以根据需要进行修改*/
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

void main(int argc, char const *argv[])
{
    
    return 0;
}
