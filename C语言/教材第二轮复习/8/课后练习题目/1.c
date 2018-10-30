#include <stdio.h>
#include <math.h>

typedef int bool;
#define YES 1
#define FALSE 0

int main(int argc, char const *argv[])
{
    int num;
    printf("Please input a number : ");
    // scanf("%d", &num);
    num = 5;
    printf("%s", isPrimeNumber(num) == 0 ? "Not prime number" : "prime number");
    return 0;
}


bool isPrimeNumber(int num)
{
    int i;
    for(i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return FALSE;
    
    return YES;
}