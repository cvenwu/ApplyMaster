/*
输入5行5列的数组
1. 求出对角线上各元素的和
2. 求出对角线上行、列下标均为偶数的各个元素的积
3. 找出对角线上其值最大的元素和它在数组中的位置
*/


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num[5][5], sum = 0, product = 1, i, j, max;
    
    //数组赋值
    for(i = 0; i <= 4; i++)
        for(j = 0; j <= 4; j++)
            scanf("%d", &num[i][j]);
    
    max = num[0][0];
    for(i = 0; i <= 4; i++)
        for(j = 0; j <= 4; j++)
        {
            if(i == j)
            {
                sum += num[i][j];
                if(max < num[i][j]);
                    max = i;
            }

            if(i % 2 == 0 && j % 2 == 0)
                product *= num[i][j];
        }

    printf("对角线上各元素的和: %d\n", sum);
    printf("对角线上行、列下标均为偶数的各个元素的积: %d\n", product);
    printf("对角线上其值最大的元素为: %d 位置是第%d行第%d列\n", num[i][j], i, j);

    return 0;
}
