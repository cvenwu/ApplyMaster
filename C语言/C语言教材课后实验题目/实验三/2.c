#include <stdio.h>

void main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    if(num % 105 == 0)
        printf("可以被3,5,7同时整除!\n");
    else if(num % 15 == 0)
        printf("可以被3,5同时整除!\n");
    else if(num % 21 == 0)
        printf("可以被3,7同时整除!\n");
    else if(num % 35 == 0)
        printf("可以被5,7同时整除!\n");
    else if(num % 3 == 0)
        printf("可以被3整除!\n");
    else if(num % 5 == 0)
        printf("可以被5整除!\n");
    else if(num % 7 == 0)
        printf("可以被7整除!\n");
    else
        printf("不能被3,5,7任一个进行整除!\n");
}
