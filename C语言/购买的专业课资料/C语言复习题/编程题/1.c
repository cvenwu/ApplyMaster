/*编写程序求出555555的约数中最大的三位数是多少*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i = 999; i  >= 100; i--)
        if(555555 % i == 0)
            break;
    printf("约数中最大的三位数为: %d\n", i);
    return 0;
}
