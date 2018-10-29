/*任意输入一个偶数，请将它分解为两个素数之和*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int num, i, j;
    printf("Please input a even number : ");
    scanf("%d", &num);
    
    for(i = 2; i < num-1; i++)
        for(j = 2; j <= sqrt(i); j++)
            printf("%d = %d + %d\n", num, i, num - i);


    return 0;
}
