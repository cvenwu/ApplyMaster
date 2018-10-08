#include <stdio.h>
#define MaxSize 50                          //定义栈中元素最大个数

typedef int ElemType;                        //这里自己将Elemtype定义为int
typedef int Status;
#define TRUE 1
#define FALSE -1

typedef struct {
    ElemType data[MaxSize];                 //存放栈中元素
    int top;                                //栈顶指针
} SqStack;

/*初始化*/
void InitStack(SqStack *s)
{
    s.top = -1;
}

/*判断栈是否为空*/
Status StackEmpty(SqStack *s)
{
    if(s.top == -1)
        return TRUE;
    else
        return FALSE;
}

/*进栈*/
Status Push(SqStack *s, ElemType x)
{
    if(s->top == -1)
        return FALSE;
    x = s->data[s->top--];
    return TRUE;
}

/*出栈*/
Status Pop(SqStack *s, ElemType e)
{
    if(s->top == -1)                    //栈空，报错
        return FALSE;                   
    e = s->data[s->top--];              //先出栈，指针减1
    return TRUE;
}

/*读栈顶元素*/
Status GetTop(SqStack *s, ElemType e)
{
    if(s->top == -1)                    //栈空，报错
        return FALSE;
    e = s->data[s->top];                //e记录栈顶元素
    return TRUE;
}


int main(int argc, char const *argv[])
{

    
    return 0;
}
