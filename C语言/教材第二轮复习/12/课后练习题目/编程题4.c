

/**
 * 
 * 
 **/



#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char no[10];
    char name[20];
    int score;
    int time;
};


int main(int argc, char const *argv[])
{
    FILE *file;
    if((file = fopen(argv[1], "r")) == NULL)
    {
        printf("Open File Error!\n");
        exit(0);
    }

    struct student stu[8];
    int i, j;
    struct student temp;
    for(i = 0; i < 8; i++)
        fscanf(file, "%10d %20c %3d %2d", stu[i]);
    
    for(i = 0; i <= 6; i++)
    {
        for(j = i; j < 7; j++)
        {
            if(stu[j].score < stu[j+1].score)
            {
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }

    for(i = 0; i <= 6; i++)
    {
        for(j = i; j < 7; j++)
        {
            if(stu[j].score == stu[j+1].score)
            {
                if(stu[j].time > stu[j+1].time)
                {
                    temp = stu[j];
                    stu[j] = stu[j+1];
                    stu[j+1] = temp;
                }
            }
        }
    }

    for(i = 1; i <= 8; i++)
        printf("%3d %10d %20s %3d %2d\n", i, stu[i-1].no, stu[i-1].name, stu[i-1].score, stu[i-1].time);

    fclose(file);




    return;
}
