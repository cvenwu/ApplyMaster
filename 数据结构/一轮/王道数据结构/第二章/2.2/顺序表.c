#include <stdio.h>
#define MaxSize 2                              //定义线性表的最大长度

/*自己定义的数据类型，为了防止程序出错*/
#define ElemType int
#define TRUE 1
#define FALSE 0

/*静态分配*/
typedef struct{
    ElemType data[MaxSize];
    int length;
} SqList;                                       //顺序表的类型定义

/*动态分配*/
typedef struct{
    ElemType *data;                             //指示动态分配数组的指针
    //int MaxSize, length;                        //数组的最大容量和当前个数
} SeqList;                                      //动态分配数组顺序表的类型定义

/*插入操作：将e插入到第i个位置*/
int ListInsert(SqList *L, int i, ElemType e)
{
    int j;
    /*判断存储空间是否已满*/
    if(L->length >= MaxSize)
        return FALSE;

    /*判断i是否合法*/
    if(i < 1 || i > L->length + 1)
        return FALSE;

    for(j = L->length; j >= 1; j--)          //将第i个元素以及之后的元素全部后移
        L->data[j] = L->data[j-1];

    L->data[i-1] = e;                            //在位置i处放入e
    L->length++;                                 //L长度加1
    return TRUE;
}


/*删除操作：删除顺序表中第i个位置的元素，成功返回TRUE，并将被删除的元素用引用变量e返回，否则返回false*/
int ListDelete(SqList *L, int i, ElemType *e)
{
    int j;
    if(i < 1 || i > L->length)                       //判断i的范围是否合法
        return FALSE;

    *e = L->data[i-1];                                //被删除的元素赋值给e
    
    for(j = i; j < L->length; j++)
        L->data[j-1] = L->data[j];

    L->length--;                                     //线性表长度减1
    return TRUE;
}

/*按值查找：顺序查找，在顺序表L中查找第一个元素值等于e的元素，并返回其位序，查找不成功返回FALSE*/
int LocateElem(SqList L, ElemType e)
{
    int i;
    for(i = 0; i < L.length; i++)
        if(L.data[i] == e)
            return i+1;                             //下标为i的元素值等于e，返回其位序i+1
    
    return FALSE;                                   //退出循环，说明查找失败
}

int InitList(SqList *l)
{
    if(l->length != 0)
        return FALSE;

    l->length = 0;
    return TRUE;
}


void main(int argc, char const *argv[])
{
    SqList list;
    SqList *l = &list;
    printf("%d\n", InitList(&list));
    if(InitList(&list))
        printf("初始化顺序表成功!\n");
    if(ListInsert(l, 1, 25))
        printf("插入成功!\n");
    if(ListInsert(l, 2, 99))
        printf("插入成功!\n");
    
    int i;
    for(i = 0; i < list.length; i++)
        printf("%d\t", list.data[i]);

    return;
}
