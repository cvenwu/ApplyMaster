
/*
    编写一个函数 Day_Of_Year(nowdate), 该函数的功能是根据日期参数nowdate, 返回这一日期是当年的第几天
    
    函数参数用一包含年、月、日的结构体

*/


#include <stdio.h>
#include <stdlib.h>

struct date{
    int year, month, day;
} mydate;

int Day_Of_Year(struct date *nowdate)
{
    int days = 0;
    
    

    switch(nowdate->month-1)
    {
        case 12:
            days += 31;
        case 11: 
            days += 30;
        case 10:
            days += 31;
        case 9:
            days += 30;
        case 8:
            days += 31;
        case 7:
            days += 31;
        case 6:
            days += 30;
        case 5:
            days += 31;
        case 4:
            days += 30;
        case 3:
            days += 31;
        case 2:
            days += 28;
        case 1:
            days += 31;
            break;
        default:
            printf("Illegal input content!\n");
            break;
    }

    if((((nowdate->year % 4 == 0) && (nowdate->year % 100 != 0)) || (nowdate->year % 400 == 0)) && (nowdate->month > 2))
        days += 1;

    days += nowdate->day;
    return days;
}


int main(int argc, char const *argv[])
{ 
    printf("Please input the year : ");
    scanf("%d", &mydate.year);
    if(mydate.year <= 0)
    {
        printf("Illegal Input content!\n");   
        return -1;
    }

    printf("Please input the month : ");
    scanf("%d", &mydate.month);
    if(mydate.month <= 0)
    {
        printf("Illegal Input content!\n");   
        return -1;
    }

    printf("Please input the day : ");
    scanf("%d", &mydate.day);
    if(mydate.day <= 0)
    {
        printf("Illegal Input content!\n");   
        return -1;
    }

    printf("%d\n", Day_Of_Year(&mydate));

    return 0;
}
