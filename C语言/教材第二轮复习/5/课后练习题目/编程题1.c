/**
 * 编写一程序，判断输入整数的正负性和奇偶性
 **/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int num;
    printf("Please input an integer : ");
    scanf("%d", &num);
    if(num > 0)
        printf("%d是正数!\n", num);
    else if(num < 0)
        printf("%d是负数!\n", num);
    else
        printf("%d无正负!\n", num);

    if(num % 2)
        printf("%d是奇数!\n", num);
    else
        printf("%d是偶数!\n", num);
    
    return 0;
}
