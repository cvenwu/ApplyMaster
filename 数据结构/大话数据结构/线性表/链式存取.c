#include <stdio.h>



typedef int ElemType;                           /*typedef 原名 新名*/
typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;                  /*定义LinkList*/


/*初始条件：顺序线性表L已经存在，1 <= i <= ListLength(L)*/
/*操作结果：用e返回L中第i个数据元素的值*/
Status GetElem(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;             /*声明一个结点P*/
    p = L->next;            /*让p指向链表中L的第1个结点*/
    j = 1;                  /*j为计数器*/
    while(p && j<i)         /*p不为空或者计数器j还没有等于i时，循环继续*/
    {
        p = p->next;
        ++j;
    }

    
}



int main(int argc, char const *argv[])
{
    


    printf("Hello World!\n");

    return 0;
}
