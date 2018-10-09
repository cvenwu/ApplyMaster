#include <stdio.h>

#define MaxSize 50                          //定义队列中元素的最大个数
typedef int ElemType;
typedef int Status;

#define TRUE 1
#define FALSE 0


typedef struct {
    ElemType data[MaxSize];                 //存放队列元素
    int front, rear;                        //队头指针和队尾指针
} SqQuene;



/*初始化*/
void InitQueue(SqQuene *q)
{
    q->rear = q->front = 0;
}

/*判断队伍是否为空*/
Status isEmpty(SqQuene *q)
{
    if(q->rear == q->front)                 //队空条件
        return TRUE;
    else
        return FALSE;
}

/*入队*/
Status EnQueue(SqQuene *q, ElemType e)
{
    if((q->rear + 1) % MaxSize == q->front)             //队满
        return FALSE;                                   
    q->data[q->rear] = e;
    q->rear = (q->rear + 1) % MaxSize;                  //队尾指针加1取模
    return TRUE;

}

/*出队*/
Status DeQueue(SqQuene *q, ElemType x)
{
    if(q->rear == q->front)                             //队空报错
        return FALSE;
    
    x = q->data[q->front];
    q->front = (q->front + 1) % MaxSize;                //队尾指针加1取模
    return TRUE;
}




void main(int argc, char const *argv[])
{
    
    return;
}
