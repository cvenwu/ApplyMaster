#include <stdio.h>
typedef int ElemType;
#define Status int
#define FALSE 0
#define TRUE 1
#define OK 1
#define ERROR 0
#define MaxSize 10


/*
InitList(&L)            初始化表，构造一个空的线性表
Length(L)               求表长，返回线性表L的长度，也就是L中数据元素的个数
LocateElem(L, e):       按值查找操作。在表L中查找具有给定关键字值的元素
GetElem(L, i);          按位查找操作，获取表L中第i个位置的元素的值
ListInsert(&L, i, e):   插入操作，在表L中第i个位置上指定元素e
ListDelete(&L, i, &e):  删除操作，删除表L中第i个位置的元素，并用e返回删除元素的值
PrintList(L):           输出操作，按前后顺序输出线性表中L的所有元素的值
Empty(L):               判空操作，若L为空表，则返回true,否则返回false
DestroyList(&L):        销毁操作，销毁线性表，并释放线性表L所占有的内存空间
*/

typedef struct SeqList
{
    ElemType data[MaxSize];
    int length;
}SeqList;

Status InitList(SeqList *l)
{
    if(l == NULL)
        return OK;
    l->length = 0;
    return OK;
}

int Length(SeqList *l)
{
    return l->length;
}

Status LocateElem(SeqList *L, ElemType e)
{
    int i;
    for(i = 0; i < L->length; i++)
        if(L->data[i] == e)
            return i+1;
    
    return FALSE;
}

ElemType GetElem(SeqList *l, int i)
{
    if(l->length == 0 || i > l->length || i < 1)
        return FALSE;
    
    return l->data[i-1];
}

Status ListInsert(SeqList *l, int i, ElemType e)
{
    if(l->length == MaxSize || i < 1 || i > l->length + 1)
        return FALSE;
    
    int j;
    for(j = l->length - 1; j >= i-1; j--)
        l->data[j+1] = l->data[j];
    l->data[i-1] = e;
    l->length++;

    return TRUE;
}

Status ListDelete(SeqList *l, int i, ElemType *e)
{
    if(l->length == 0 || i < 1 || i > l->length)
        return FALSE;
    
    int j;
    *e = l->data[i-1];
    for(j = l->length - 1; j > i - 1; j--)
        l->data[j-1] = l->data[j];
    l->length--;
    return TRUE;
}

void PrintList(SeqList *l)
{
    int i;
    for(i = 0; i < l->length - 1; i++)
        printf("%d\t", l->data[i]);
}

Status Empty(SeqList *l)
{
    if(l->length == 0)
        return TRUE;
    
    return FALSE;
} 

Status DestroyList(SeqList *l)
{
    if(l != NULL)
    {
        l->length = 0;
        l = NULL;
    }
    return OK;
}

int main(int argc, char const *argv[])
{
    SeqList *l;
    printf("Hello World!\n");
   	printf("%d\n", InitList(l));
    printf("Hello World!\n");
    int a = ListInsert(l, 1, 5);
    printf("%d\n", a);
    printf("Hello World!\n");
    PrintList(l);
    printf("Hello World!\n");
    return 0;
}
