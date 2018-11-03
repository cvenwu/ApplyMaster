/*
编写程序求出1000!后面有多少个0
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    long fact = 1;
    int i, count = 0;
    for(i = 2; i <= 1000; i++)
    {
        fact *= i;
        while(fact % 10 == 0)
        {
            fact /= 10;
            count++;
        }
        fact %= 100;                    //为了防止溢出

    }

    printf("1000!后面有%d个零\n", count);
    return 0;
}

/*
void main(void)
{
    int i, n = 0;
    long s = 1;
    for(i = 1; i <= 1000; i++)
    {
        s *= i;
        while(s % 10 == 0)
        {
            s /= 10;
            n++;
        }
        s = s % 10;
    }
    printf("n = %d, s = %d\n", n, s);
}
*/