#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  
【例】利用下面的公式求π的近似值，要求累加到最后一项小于10-6为止。
*/


int main(int argc, char const *argv[])
{
    double result = 0, temp, i;
    int flag = 1;
    for(i = 1; fabs(1 / i) >= 1e-6; i += 2, flag++)
    {
        if(flag % 2 == 0)
            i *= (-1);

        result = result + 1 / i;
    }

    printf("PI is %lf\n", result * 4);
    return 0;
}
