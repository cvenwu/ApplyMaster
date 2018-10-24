/**
 * 输入任意三个数num1, num2, num3 从小到大进行输出
 **/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, temp;
    printf("input three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num1 > num3)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }


    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}
