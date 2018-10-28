#include <stdio.h>

#define CLASS 3
#define STU 4


int FindMax(int *p, int m, int n, int *pRow, int *pCol);

void main(int argc, char const *argv[])
{
    int score[CLASS][STU], i, j, maxScore, row, col;
    printf("Please enter score :\n");
    for(i = 0; i < CLASS; i++)
        for(j = 0; j < STU; j++)
            scanf("%d", &score[i][j]);                      //输入学生成绩
    
    //计算最高分及其学生所在班号和学号
    maxScore = FindMax(*score, CLASS, STU, &row, &col);
    printf("maxScore = %d, class = %d, number = %d\n", maxScore, row+1, col+1);
}

//计算任意m行STU列二位数组中元素的最大值,并指出其所在行列下标值
int FindMax(int *p, int m, int n, int *pRow, int *pCol)
{
    int i, j, maxScore;
    maxScore = p[0];
    *pRow = 0;
    *pCol = 0;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(p[i * n + j] > maxScore)
            {
                maxScore = p[i *n + j];                 //记录当前最大值
                *pRow = i;                              //记录行下标
                *pCol = j;                              //记录列下标
            }


    return maxScore;
}
