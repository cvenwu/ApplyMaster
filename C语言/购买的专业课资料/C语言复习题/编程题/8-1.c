#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, a, j, s, k;
    printf("please input n \n");
    scanf("%d", &n);
    if(n >= 5)
    {
        a = n / 5;
        i = n / 25;
        j = n / 125;
        k = n / 625;
        s = i + j + k + a;
    }
    printf("the number of zero is %d\n", s);
    return 0;
}