#include <stdio.h>

typedef int SElemType;          /*SElemType类型根据实际情况而定，这里假设为int*/
typedef int Status;

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define MAXSIZE 5
typedef struct 
{
    SElemType data[MAXSIZE];
    int top;                            /*用于栈顶指针*/
}SqStack;

/*栈的顺序存储结构-----进栈操作*/
Status Push(SqStack *s, SElemType e)
{
    if(s->top == MAXSIZE - 1)           /*栈满*/
    {
        return ERROR;
    }

    s->top++;                               /*栈顶指针加1*/
    s->data[s->top] = e;                    /*将新插入元素赋值给栈顶空间*/
    return OK;
}

/*栈的顺序存储结构-----出栈操作*/
Status Pop(SqStack *s, SElemType *e)
{
    if(s->top == -1)
        return ERROR;
    *e = s->data[s->top];           /*将要删除的栈顶元素赋值给e*/
    s->top--;                       /*栈顶指针域减一*/
    return OK;
}