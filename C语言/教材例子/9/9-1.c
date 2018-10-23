#include <stdio.h>

int main()
{
    unsigned short a;
    unsigned short *pi = &a;        /*pi指向变量a，访问short类型单元*/
    char *pc = (char *)&a;          /*pc也指向变量a, 但访问char类型单元*/

    *pi = 0XF0F0;
    *pc = 0;
    printf("a=%X", a);

    

    return 0;
}