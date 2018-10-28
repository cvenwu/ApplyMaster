#include <stdio.h>

struct date 
{
    int year, month, day;
};

static int day_tab[][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31}
};

int Day_Of_Year(struct date nowdate);

void main(int argc, char const *argv[])
{
    struct date nowdate;
    int days;
    
    printf("Input date(YYYY-MM-DD): ");
    scanf("%4d-%2d-%2d", &nowdate.year, &nowdate.month, &nowdate.day);
    days = Day_Of_Year(nowdate);
    printf("The year passed days = %d\n", days);
}

int Day_Of_Year(struct date nowdate)
{
    int i, leap, days;


    //是否闰年
    leap = nowdate.year % 4 == 0 && nowdate.year % 100 != 0 || nowdate.year % 400 == 0;
    days = nowdate.day;
    for(i = 0; i < nowdate.month; i++)
        days += day_tab[leap][i];

    return days; 
}



