#include <stdio.h>
int main(int argc, char const *argv[])
{
    short int a[2][3] = { {1,2,3}, {4,5,6} };
    short int (*p)[3];
    short int i, j;
    p = a;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
            printf("a[%d][%d]=%d ", i, j, p[i][j]);         //显示每个数组元素的值
        printf("\n");
    }

    p++;                                 //p指向二维数组a的第二行行地址
    for(j = 0; j < 3; j++)              
        printf("%d ", p[0][j]);         //显示数组中第二行元素的值
    return 0;
}