#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double student[6][5];
    int i,j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%lf", &student[i][j]);
            student[i][4] += student[i][j];
        }
        student[5][0] += student[i][0];
        student[5][1] += student[i][0];
        student[5][2] += student[i][0];
        student[5][3] += student[i][0];
    }


    for(i = 0; i <= 4; i++)
        printf("平均分依次为%lf\n", student[i][4] / 4);
    printf("语文平均分为:%lf\n", student[5][0] / 5);
    printf("数学平均分为:%lf\n", student[5][1] / 5);
    printf("英语平均分为:%lf\n", student[5][2] / 5);
    printf("综合平均分为:%lf\n", student[5][3] / 5);

        
        
    
        
    
    return 0;
}
