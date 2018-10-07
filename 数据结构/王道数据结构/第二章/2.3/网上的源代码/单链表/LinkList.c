#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

//单链表的初始化

void InitList(LinkList* PHead)
{
    if ((*PHead = (LinkList)malloc(sizeof(Node))) == NULL)
    {
        printf("内存申请失败!\n");
        return;
    }
    (*PHead)->Next = NULL;
}

//判断单链表是否为空

int ListEmpty(LinkList PHead)
{
    return  PHead->Next == NULL;
}

//头插法建表
void CreatFormHead(LinkList PHead)
{
    DataType data; 
    Node* s;             //要插入的结点指针
    scanf("%d", &data);
    while (data != -1)    //输入要插入的值以-1作为结束标志
    {
        s = (Node*)malloc(sizeof(Node));
        s->Data = data;
        s->Next = PHead->Next;
        PHead->Next = s;
        scanf("%d", &data);
    }
}

//尾插法建表
void CreatFormTail(LinkList PHead)
{
    Node* s;
    Node* tail;             
    DataType data;
    tail = PHead;
    scanf("%d", &data);
    while (data != -1)
    {
        s = (Node*)malloc(sizeof(Node));
        s->Data = data;
        s->Next = tail->Next;
        tail->Next = s;
        tail = s;   //tail始终指向表尾
        scanf("%d", &data);
    }
}

//按序号查找

Node* Get(LinkList PHead, int i)
{
    Node* p;   //结点指针
    int j = 0;
    p = PHead;
    if (ListEmpty(PHead))    //空表
    {
        printf("表为空！\n");
        return 0;
    }
    while (!ListEmpty(PHead) && j < i)
    {
        p = p->Next;
        j++;
    }
    if (j == i)
    {
        return p;   /*返回指向第i个结点的指针p*/
    }
    return NULL;
}


//按值查找
int Locate(LinkList PHead, DataType data)
{
    Node*p = PHead->Next;
    int i = 1;
    while (p)
    {
        while (p->Data != data)
        {
            p = p->Next;
            i++;
        }
        break;              //找到节点时退出循环
    }
    return i;
}

//求单链表的长度
int length(LinkList PHead)
{
    Node *p;
    p = PHead;
    int len = 0;
    while (p->Next != NULL)
    {
        len++;
        p = p->Next;
    }
    return len;
}

//任意位置插入
void InsList(LinkList PHead, int i, DataType data)
{
    Node*p;
    Node*s;
    p = PHead;
    int j = 0;
    while (p->Next != NULL && j < i - 1)
    {
        p = p->Next;
        j++;
    }
    if (p == NULL)
    {
        return; //插入位置不合法
    }
    s = (Node*)malloc(sizeof(Node));  //新建一个结点
    s->Data = data;
    s->Next = p->Next;
    p->Next = s;
}

//任意位置删除
int DelList(LinkList PHead, int i, DataType* data)
{
    Node* p;
    Node* s;
    p = PHead;
    int k = 0;
    /*删除位置i小于0，或者删除位置大于元素个数，
    比如链表中只有一个元素，i=2时*/
    if (i < 0 || i>length(PHead))
    {
        printf("删除位置不合法！\n");
        return 0;  //删除位置不合法
    }
    while (p->Next != NULL && k < i - 1)
    {
        p = p->Next;
        k++;
    }
    s = p->Next;
    *data = s->Data;
    p->Next = s->Next;
    free(s);
    return *data;
}


//销毁链表
void DestoryList(LinkList PHead)
{
    Node* p;
    Node* q;
    p = PHead;
    while (p->Next != NULL)
    {
        q = p;
        p = p->Next;
        free(q);
    }
}


//打印表中元素
void PrintList(LinkList PHead)
{
    Node* p;
    p = PHead->Next;
    while (p)
    {
        printf("%d ", p->Data);
        p = p->Next;
    }
    printf("\n");
}