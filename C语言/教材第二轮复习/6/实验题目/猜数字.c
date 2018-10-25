#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int i = 3;
    srand((unsigned int)time(NULL));                                //srand(time(NULL));//用系统当前时间设置rand()随机序列种子，保证每次运行随机序列不一样 
    int num = rand() % 100;                                         //生成一个100以内的随机数字
    int value = -1;
    printf("Please input the number you want to guess : ");

    while(value != num)
    {
        scanf("%d", &value);
        if(num > value)
            printf("猜小了!\n");
        if(num < value)
            printf("猜大了!\n");
        
        if(num == value)
        {
            printf("恭喜你猜对了!\n");
            break;
        }

        printf("请重新输入一个数字!\n");
        

    }



    return 0;
}
