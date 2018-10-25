#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
  【例1】验证哥德巴赫猜想：任一充分大的偶数，可以用两个素数之和表示。
*/

int main(int argc, char const *argv[])
{
    int num, i, temp, j;
    printf("Please input a numebr you want to verify : ");
    // scanf("%d", &num);
    num = 4;
    for(i = 1; i <= num - 1; i++)
    {
        temp = num - i;
        for(j = 2; j <= sqrt(num) && j <= sqrt(temp); j++)
            if((i % j != 0) && (temp % j != 0))
                printf("%d = %d + %d\n", num, i, temp);
    }
    return 0;
}
