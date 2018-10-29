

/*
输入一个5行5列的数组，编程实现
1. 求出对角线上各个元素的和
2. 求出对角线上行、列下标均为偶数的各元素的积
3. 找出对角线上其值最大的元素和它在数组中的位置
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num[5][5], i, j, sum = 0, max, temp, prac = 1;
    printf("Please input the number of array[5][5]: ");
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
                if(max < num[i][j])
                {
                    temp = i;
                    max = num[i][j];
                }

                if(i % 2 == 0 && j % 2 == 0)
                    prac *= num[i][j];
            }
        }
    

    printf("sum : %d\n", sum);
    printf("fact : %d\n", prac);
    printf("max : %d, position : %d,%d\n", max, temp, temp);
    
    
    
    
    return 0;
}
