#include <stdio.h>
#include <stdlib.h>

#define NUM 100

struct Score_Tab
{
    int rank;
    char no[11];
    char name[21];
    int score;
    int time;
};

void main(int argc, char const *argv[])
{
    struct Score_Tab score[100], temp;
    FILE *fp;
    int i, j, k, n, s, t;

    if((fp = fopen("score_tab.txt", "r")) == NULL)              //打开文件失败
    {
        printf("can not open source file: score_tab.txt\n");
        exit(0);
    }

    //从文件中读取数据到结构体数组score中
    n = 0;
    while(fscanf(fp, "%s%s%d%d", score[n].no, score[n].name, &score[n].score, &score[n].time) != EOF)
        n++;
    
    //对结构体数组score按分数降序排列,分数相同则按所用时间升序排列
    for(i = 0; i < n-1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
            if(score[j].score > score[k].score || score[j].score==score[k].score && score[j].time < score[k].time)
                k = j;

        if(k != i)
        {
            temp = score[i];
            score[i] = score[k];
            score[k] = temp;
        }
    }

    //排名次
    j = 0;
    s = 0;
    t = 0;
    for(i = 0; i < n; i++)
    {
        if(score[i].score != s || score[i].time != t)
        {
            j++;
            score[i].rank = j;
            s = score[i].score;
            t = score[i].time;
        }
        score[i].rank = j;
    }

    //显示排名结果
    for(i = 0; i < n; i++)
        printf("%4d %-10s %-20s %3d %3d\n", score[i].rank, score[i].no, score[i].name, score[i].score, score[i].time);
    

    fclose(fp);

}



