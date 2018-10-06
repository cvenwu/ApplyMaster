#include <stdio.h>

#define ElemType int

typedef struct LNode 
{
    ElemType data;                  //数据域
    struct LNode *next;             //指针域
}Lnode, *LinkList;