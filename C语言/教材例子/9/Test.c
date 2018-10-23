#include <stdio.h>
int main()
{
    int a = 3;
    int *p = &a;                /* 指针变量赋值只能赋给地址，赋值方法一, 这里所定义的指针变量是p */
    int * p1;                   /* *与指针变量名字之间可以有空格 */
    p1 = &a;                    /* 赋值方法二 */
    *p1 = 333;
    printf("%d\n", *p);
    
    return 0;
}
