#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


typedef int Status;
typedef int ElemType;


#define TRUE 1
#define FALSE 0

typedef struct {                        //链式队列结点
    ElemType data;
    struct LinkNode *next;               
}LinkNode;

typedef struct {                        //链式队列
    LinkNode *front, *rear;             //队列的头指针和队尾指针
}LinkQueue;


/*初始化*/
void InitQueue(LinkQueue *q)
{
    q->front = q->rear = (LinkNode *)malloc(sizeof(LinkNode));      //建立头结点
    q->front->next = NULL;                                          //初始为空
}

/*判队空*/
Status IsEmpty(LinkNode *q)
{
    if(q->front == q->rear)
        return TRUE;
    else
        return FALSE;
}

/*入队*/
void EnQueue(LinkQueue *q, ElemType e)
{
    s = (LinkNode *)malloc(sizeof(LinkNode));
    s->data = e;
    s->next = NULL;
    q->rear->next = s;
    q->rear = s;
}


/*出队*/
Status DeQueue(LinkQueue *q, ElemType x)
{
    if(q->front == q->rear)
        return false;               //空队
    p = q->front->next;
    x = p->data;
    q->front->next = p->next;
    if(q->rear == p)
        q->rear = q->front;
    free(p);
    return TRUE;
}


void main(int argc, char const *argv[])
{
    
    return;
}
