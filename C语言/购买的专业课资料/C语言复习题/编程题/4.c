/*
找出一个二维数组中的鞍点,即该位置上的元素是该行上的最大值，是该列上的最小值，二维数组也可以没有鞍点
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num[5][5], min[5], max[5], i, j;
    for(i = 0; i <= 4; i++)
    {
        max[i] = 0;
        
        for(j = 0; j <= 4; j++)
        {
               if(num[i][max[i]] < num[i][j])
                    max[i] = j; 
        }
    }    

    return 0;
}
