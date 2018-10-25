#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int i, j, k, sum;

    sum = 0;
    for(i = 1; i <= 36; i++)
    {
        k = i;                      //彩票起始号
        sum = i;
        for(j = 1; j <= 6; j++)
        {
            k = k + j;
            if(k > 36)
                break;
            sum = sum + k;
        }

        if(sum != 105)              //和数不为105继续下一轮循环
            continue;
        
        k = i;
        for(j = 0; j <= 6; j++)     //显示彩票号码
            printf("%d ", k = k + j);

        printf("\n");

    }
    return 0;
}
