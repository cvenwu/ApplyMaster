#include <stdio.h>
#include <stdlib.h>


struct student {
    char no[11], name[20];
    double chinese, math, english, sum, avg;
} *Stu;

int main(int argc, char const *argv[])
{
    int num, i, j;
    struct student *temp;
    printf("Please input the number of students : ");
    scanf("%d", &num);
    Stu = (struct student *)malloc(num * sizeof(struct student));
    for(i = 0; i < num; i++)
    {
        printf("Please input the message of student");
        gets((Stu+i)->no);
        gets((Stu+i)->name);
        scanf("%lf %lf %lf", &(Stu+i)->chinese, &(Stu+i)->math, &(Stu+i)->english);
        (Stu+i)->sum = (Stu+i)->chinese + (Stu+i)->math + (Stu+i)->english;
        (Stu+i)->avg = (Stu+i)->sum / 3;
    }

    for(i = 1; i <= num - 1; i++)
    {
        for(j = 1; j <= num-i; j++)
        {
            if((Stu+j-1)->sum > (Stu+j)->sum)
            {
                temp = Stu+j-1;
                *(Stu+j-1) = *(Stu+j);
                (Stu+j) = temp;
            }
        }
    }


    


    return 0;
}
