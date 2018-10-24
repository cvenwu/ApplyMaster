/**
 * 编程判断输入数据的符号属性
 * 
 **/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sign, num;
    printf("Please input a number : ");
    scanf("%d", &num);
    if(num > 0)
        sign = 1;
    else if(num < 0)
        sign = -1;
    else
        sign = 0;
    
    printf("sign = %d\n", sign);

    return 0;

}