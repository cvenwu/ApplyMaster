#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
	int num, i;
    int maxscore, minscore, sumscore;
    int *pscore;
    float averscore;

    printf("input the number of student: ");            //输入学生人数
    scanf("%d", &num);
    if(num <= 0)
        return;
    
    pscore = (int *)malloc(num * sizeof(int));          //为存放学生成绩动态分配内存
    if(pscore == NULL)
    {
        printf("Insufficient memory available\n");
        exit(0);
    }

    printf("input the scores of students now :\n");     //输入学生成绩
    for(i = 0; i < num; i++)
        scanf("%d", pscore+i);

    maxscore = pscore[0];
    minscore = pscore[0];
    sumscore = pscore[0];

    for(i = 1; i < num; i++)
    {
        if(pscore[i] > maxscore)
            maxscore = pscore[i];
        if(pscore[i] < minscore)
            minscore = pscore[i];
        sumscore += pscore[i];
    }

    averscore = (float)sumscore / num;      //计算平均分
    printf("-----------------------------------------------\n");
    printf("the average score of the student is %.1f\n", averscore);
    printf("the highest score of the student is %d\n", maxscore);
    printf("the lowest score of the student is %d\n", minscore);

    free(pscore);                           //释放动态分配的内存


}
