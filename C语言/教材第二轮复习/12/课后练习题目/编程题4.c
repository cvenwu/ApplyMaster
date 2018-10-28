#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char no[11], name[21];
    int score, time;
};

int main(int argc, char const *argv[])
{
    FILE *file;
    struct Student stu[8], temp;    printf("11");

    if((file = fopen("score_tab.txt", "r+")) == NULL)
    {
        printf("Open File Error!\n");
        exit(0);
    }
    int i = 0, j;
    while(fscanf(file, "%s%s%d%d", stu[i].no, stu[i].name, &stu[i].score, &stu[i].time) != EOF)
        i++;
    
    printf("11");

    //分数按照降序排列
    for(i = 0; i < 7; i++)
        for(j = 0; j < 7 - i; j++)
        {
            if(stu[j].score < stu[j+1].score)
            {
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    printf("11");
    printf("名次\t学号\t姓名\t分数\t所用时间\n");
    for(i = 0; i <= 7; i++)
        printf("%d %10d %20s %3d %3d\n", i+1, stu[i].no, stu[i].name, stu[i].score, stu[i].time);

    fclose(file);
    return 0;
}
