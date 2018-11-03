/*
任意输入一个偶数，将它分解为两个素数之和
*/

#include <stdio.h>
#include <math.h>

int isPrimeNumber(int num)
{
    int i;
    for(i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return 0;
            
    return 1;
}

int main(int argc, char const *argv[])
{
    int even, i;
    scanf("%d", &even);
    for(i = 1; i < even; i++)
        if(isPrimeNumber(i) && isPrimeNumber(even-i))
            printf("%d = %d + %d\n", even, i, even-i);
    return 0;
}
