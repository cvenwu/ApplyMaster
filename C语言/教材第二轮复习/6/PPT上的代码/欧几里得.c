#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /*欧几里得算法求最大公约数*/
    int num1, num2, r;
    printf("Please input two numbers : ");
    scanf("%d %d", &num1, &num2);
    while(num1 % num2 != 0)
    {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }

    printf("最大公约数为%d\n", num2);
    return 0;
}
