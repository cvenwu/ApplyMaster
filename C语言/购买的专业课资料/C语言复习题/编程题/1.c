/*编写程序求出555555的约数中最大的三位数是什么*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, max;
    for(i = 999; i >= 100; i--)
        if(555555 % i == 0)
        {
            max = i;
            break;
        }
    printf("%d\n", max);
    return 0;
}
