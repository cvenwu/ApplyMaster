


/***
 * 输入一个年份和月份，输出该月有多少天?  switch 语句实现
 * 
 **/
#include <stdio.h>
#include <stdlib.h>


void main(int argc, char const *argv[])
{
    int year, month, day, leap = 0;
    
    printf("Please input the year and month : ");
    scanf("%d %d", &year, &month);
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            day = 31;
            break;
        case 4: case 6: case 9: case 11:
            day = 30;
            break;
        case 2:
            day = 28;
            break;
        default:
            printf("No legal input!\n");
            break;
        /*
        case 12:
            day += 31;
        case 11:
            day += 30;
        case 10:
            day += 31;
        case 9:
            day += 30;
        case 8:
            day += 31;
        case 7:
            day += 31;
        case 6:
            day += 30;
        case 5:
            day += 31;
        case 4:
            day += 30;
        case 3:
            day += 31;
        case 2:
            day += 28;
        case 1:
            day += 31;
            break;
        default:
            printf("No legal input!\n");
            break;*/
    }

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        if(month = 2)
            day += 1;
    
    printf("%d年%d月一共有%d天\n", year, month, day);

    return;
}
