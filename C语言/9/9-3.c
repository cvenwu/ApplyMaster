#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int a[2][3] = { {1,2,3}, {4,5,6} };
    short int i, j, *p;

    p = &a[0][0];
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
            printf("a[%d][%d]=%d", i, j, *(p+i*3+j));       //显示每个数组元素的值
        printf("\n");
    }    

    return 0;
}
