#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


//注意事项
//LocateElem记得判断是否为空，再判断元素值是否相等


/*
void InitLinkList(LinkList *l);                                 //初始化链表
Status ListEmpty(LinkList *l)                                   //判断单链表是否为空
void CreatFormHead(LinkList PHead);                             //头插法建表
void CreatFormTail(LinkList PHead);                             //尾插法建表
LinkList *GetElem(LinkList *l, int i)                           //按序号查找
LinkList *LocateElem(LinkList *l, ElemType e)                   //按值查找表结点
void PrintLinkList(LinkList *l)                                 //打印链表
Status DestroyLinkList(LinkList *l)                             //销毁链表
Status DeleteNodeFromLinkList(LinkList *l, int i)               //删除操作
Status InsertNodeToLinkList(LinkList *l, int i, ElemType data)  //插入节点
int GetListLength(LinkList *l)                                  //求链表的长度
*/

typedef int ElemType;
typedef int Status;
#define TRUE 1
#define FALSE 0

typedef struct LinkList{
    ElemType data;
    struct LinkList *next;
}LinkList;


/*单链表的初始化*/
LinkList *InitLinkList(LinkList *l)
{
    if((l = (LinkList *)malloc(sizeof(LinkList))) == NULL)
        printf("初始化内存失败!\n");
    l->next = NULL;

    printf("%d", l);

    return l;
}

/*判断单链表是否为空*/
Status ListEmpty(LinkList *l)
{
    return l->next == NULL;
}


/*头插法建表*/
void CreateFormHead(LinkList *l)
{
    int x;
    LinkList *node;                                         //要插入的结点指针
    printf("input a number : ");
    scanf("%d", x);
    while(x != -1)                                          //要插入的数以-1为结束标志
    {
        node = (LinkList *)malloc(sizeof(LinkList));
        node->data = x;
        node->next = l->next;
        l->next = node;
        printf("input a number : ");
        scanf("%d", x);
    }

}

/*尾插法建表*/
void CreateFormTail(LinkList *l)
{
    l = (LinkList *)malloc(sizeof(LinkList));
    int x;
    LinkList *node, *tail = l;
    printf("input the number what you want to insert : ");
    scanf("%d", &x);
    while( x != -1 )
    {
        node = (LinkList *)malloc(sizeof(LinkList));
        node->data = x;
        tail->next = node;
        tail = node;
        printf("input the number what you want to insert : ");
        scanf("%d", &x);
    }
    tail = NULL;
}

/*按序号查找*/
LinkList *GetElem(LinkList *l, int i)
{
    LinkList *node = l;
    int j = 1;
    if(i < 0)
        return NULL;
    if(i == 0)
        return node;

    node = node->next;
    while(i > j)
    {
        node = node->next;
        j++;
    }

    return node;
}

/*按值查找表结点*/
LinkList *LocateElem(LinkList *l, ElemType e)
{
    LinkList *node = l->next;
    while(node != NULL && node->data != e)
        node = node->next;

    return node;
}

/*求链表的长度*/
int GetListLength(LinkList *l)
{
    printf("GetListLength2\n");
    printf("Hello World!\n");
    printf("%d\n",l);
    printf("Hello World!\n");
    printf("%d\n",l->next);
    printf("Hello World!\n");
    if(l->next == NULL)
    {
    	printf("Hello World!\n");
	}
        return 0;
    printf("GetListLength2\n");
    int i = 1;
    LinkList *node = l->next;
    while((node = node->next) != NULL)
        i++;

    return i;
}

/*插入节点*/
Status InsertNodeToLinkList(LinkList *l, int i, ElemType data)
{
    printf("InsertNodeToLinkList1\n");
    int j = GetListLength(l);
    printf("%d\n", j);
    //判断i是否合法
    if(i <= 0 || i > GetListLength(l) + 1)                          //这里应该是i > GetListLength(l) + 1
        return FALSE;
    LinkList *node = (LinkList *)malloc(sizeof(LinkList));
    node->data = data;
    LinkList *prevNode = GetElem(l, i-1);

    node->next = prevNode->next;
    prevNode->next = node;
    return TRUE;
}

/*删除操作*/
Status DeleteNodeFromLinkList(LinkList *l, int i)
{
    if(i <= 0 || i > GetListLength(l))
        return FALSE;
    LinkList *node = GetElem(l, i-1);
    node->next = node->next->next;
    free(node->next);
    return TRUE;
}

/*销毁链表*/
Status DestroyLinkList(LinkList *l)
{
    if(l->next == NULL)
    {
        l = NULL;
        return TRUE;
    }

    LinkList *tmp = l->next, *node;
    while((node = tmp) != NULL)
    {
        tmp = node->next;
        free(node);
    }

    l = NULL;           //释放头结点
    return TRUE;
}

/*打印链表*/
void PrintLinkList(LinkList *l)
{
    if(l->next == NULL)
    {
        printf("空表!\n");
        return;
    }

    LinkList *node = l;
    while((node = node->next) != NULL)
        printf("%d\t", node->data);

}


void main(int argc, char const *argv[])
{
    /* code */
    printf("123\n");
    LinkList *l;
    printf("123\n");
    l = InitLinkList(l);
    printf("He\n");
    printf("%d\n", l);
    InsertNodeToLinkList(l, 1, 5);
    printf("123\n");
    PrintLinkList(l);
    printf("123\n");
    return;
}






