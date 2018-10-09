#include <stdio.h>
#include <malloc.h>


typedef int SElemType;          /*SElemType类型根据实际情况而定，这里假设为int*/
typedef int Status;

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define MAXSIZE 5

typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;

}StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
}LinkStack;

/*进栈操作*/
Status Push(LinkStack *S, SElemType e)
{
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = s;
    s->next = S->top;   /*把当前的栈顶元素赋值给新节点的直接后继*/
    S->top = s;         /*将新的结点s赋值给栈顶指针*/
    S->count++;
    return OK;
}

/*若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK,否则返回ERROR*/
Status Pop(LinkStack *S, SElemType *e)
{
    LinkStackPtr p;
    if(StackEmpty(*S))
        return ERROR;
    *e = S->top->data;
    p = S->top;                     /*将栈顶节点赋值*/
    S->top = S->top->next;          /*使得栈顶指针下移一位，指向后一结点*/
    free(p);                        /*释放结点P*/
    S->count--;
    return OK;                      
}

void main(int argc, char const *argv[])
{
    
    return;
}
