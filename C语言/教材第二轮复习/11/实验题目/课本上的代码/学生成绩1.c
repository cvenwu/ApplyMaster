#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


struct stu_msg
{
    char no[11];
    char name[16];
    int score[3];
    int totscore;
    float avgscore;
};

void Sort(struct stu_msg *pstu, int n);

void main(int argc, char const *argv[])
{
    struct stu_msg *pstu;
    int n, i;

    printf("Please input the number of student : ");
    scanf("%d", &n);

    //动态内存分配
    pstu = (struct stu_msg *)malloc(n * sizeof(struct stu_msg));
    if(pstu == NULL)
    {
        printf("No enough memory!\n");
        exit(0);
    }    

    //输入学生信息
    printf("Input the message of students:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", pstu[i].no, pstu[i].name, &pstu[i].score[0], &pstu[i].score[1], &pstu[i].score[2]);
        pstu[i].totscore = pstu[i].score[0] + pstu[i].score[1] + pstu[i].score[2];
        pstu[i].avgscore = pstu[i].totscore / 3.0;
    }

    Sort(pstu, n);              //按总分从高到低进行排序

    printf("\nNo\tName\tTotalScore\tAverageScore\n");
    for(i = 0; i < n; i++)
        printf("%s\t%s\t%d\t%8.2f\n", pstu[i].no, pstu[i].name, pstu[i].totscore, pstu[i].avgscore);
    
    free(pstu);
}


//按照总分从高到低进行排序
void Sort(struct stu_msg *pstu, int n)
{
    int i, j, k;
    struct stu_msg stu;
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
            if(pstu[i].totscore > pstu[j].totscore)
                k = j;
        if(k != i)
        {
            stu = pstu[i];
            pstu[i] = pstu[k];
            pstu[k] = stu;
        }
    }
}

