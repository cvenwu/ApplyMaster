#include <stdio.h>
#define MaxSize 50                          //定义栈中元素最大个数

#define Elemtype int                        //这里自己将Elemtype定义为int
#define TRUE 1
#define FALSE -1

typedef struct {
    Elemtype data[MaxSize];                 //存放栈中元素
    int top;                                //栈顶指针
} SqStack;

/*初始化*/
void InitStack(SqStack *s)
{
    s.top = -1;
}

/*判断栈是否为空*/
int StackEmpty(SqStack *s)
{
    if(s.top == -1)
        return TRUE;
    else
        return FALSE;
}


int main(int argc, char const *argv[])
{

    
    return 0;
}
