#include <stdio.h>
#include <malloc.h>

#define ElemType int

typedef struct LNode 
{
    ElemType data;                  //数据域
    struct LNode *next;             //指针域
}LNode, *LinkList;

/*利用头插法建立单链表:从表尾到表头逆向建立单链表L,每次均在头节点之后插入元素*/
LinkList CreateList(LinkList L)
{
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));                //创建头结点
    L->next = NULL;                                     //初始为空链表
    scanf("%d", &x);                                    //输入结点的值
    while(x != 9999)                                    //输入9999表示结束
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;                                    //将新结点插入表中，L为头结点
        scanf("%d", &x);                                
    }                                                   //while结束
    return L;
}

/*利用尾插法建立单链表：将新节点插入到当前链表的表尾上，为此必须增加一个尾指针r，使其始终指向当前链表的尾节点*/
LinkList CreateList2(LinkList L)
{
    /*从表头到表尾正向建立单链表L，每次均在表尾插入元素*/
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s, *r = L;                                   //r为表尾指针
    scanf("%d", &x);                                    //输入结点的值
    while(x != 9999)                                    //输入9999表示结束
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;                                          //r指向新的表尾结点
        scanf("%d", &x);
    }   
    r->next = NULL;                                     //尾结点指针置空
    return L;         
}


/*按序号查找结点值：本算法取出单链表(带头结点)中第i个位置的结点指针*/
LNode *GetElem(LinkList L, int i)
{  
    int j = 1;                          //计数，初始为1
    LNode *p = L->next;                 //头结点指针赋值给p
    if(i == 0)                          //若i等于0，则返回头结点
        return L;
    if(i < 1)                           //若i无效，则返回NULL
        return NULL;
    while(p && j < i)                   //从第1个结点开始找，查找第i个结点
    {
        p = p->next;
        j++;
    }
    return p;                           //返回第i个结点的指针，如果i大于表长，p = NULL,直接返回p即可
}



