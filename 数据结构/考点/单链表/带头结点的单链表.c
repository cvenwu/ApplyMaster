#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int Status;
typedef int ElemType;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef struct {
    ElemType data;
    struct LinkList *next;
}LinkList;



/*头插法建立单链表*/
Status CreateLinkListFromHead(LinkList *l)
{
    l = (LinkList *)malloc(sizeof(LinkList));
    l->next = NULL;
    if(l == NULL)
        return ERROR;
    int data;
    LinkList *node;
    printf("input the number what you want to insert : ");
    scanf("%d", &data);
    while(data != -1)
    {
        node = (LinkList *)malloc(sizeof(LinkList));
        node->data = data;
        node->next = l->next;
        l->next = node;
        printf("input the number what you want to insert : ");
        scanf("%d", &data);
    }

    return OK;
}

/*尾差法建立单链表*/
Status CreateLinkListFromTail(LinkList *l)
{
    
}

/*按序号查找结点值*/

/*按值查找表结点*/

/*插入结点操作*/

/*删除结点操作*/

/*求表长操作*/

/*判断单链表是否为空*/

/*打印表中元素*/

/*单链表的初始化*/

/*销毁单链表*/







void main(int argc, char const *argv[])
{
    
    return;
}
