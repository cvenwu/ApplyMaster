#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double x, fact, temp, i = 1, j, sum = 0;
    int flag = 1;
    printf("Please input the value of x : ");
    x = 1.57;
    // scanf("%lf", &x);
    temp = x;
    while(fabs(temp) > 1e-5)
    {
        fact = 1, temp = 1;
        for(j = 1; j <= i; j++)
        {
            fact *= j;
            temp *= x;
        }
        temp /= fact;
        if(flag % 2 == 0)
            sum -= temp;
        else
            sum += temp;


        printf("%lf %lf %lf\n", temp, fact, sum);

        sum += temp;
        i += 2;
        flag++;
    }

    printf("%lf\n", sum);
    return 0;
}
