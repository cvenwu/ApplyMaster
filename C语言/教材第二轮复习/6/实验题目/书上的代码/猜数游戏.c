#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int magic;                  //计算机""想"的数字
    int guess;                  //人猜的数
    int counter;                //记录人猜的次数
    char reply;                 //用户键入的回答

    srand((unsigned int)time(NULL));
    do {
        magic = rand() % 100 + 1;                           //随机生成一个1-100的随机数
        counter = 0;
        do {
            printf("Please guess a magic number : ");
            scanf("%d", &guess);
            counter++;
            if(guess > magic)
                printf("Wrong! Too high!\n");
            else if(guess < magic)
                printf("Wrong! Too low!\n");
            else
                printf("Right!\n");
            

        }while(guess != magic && counter < 10);             //猜不对并且未超过10次时继续猜

        printf("counter = %d\n", counter);
        printf("Do you want to continue(Y/N or y/n)?\n");
        reply = getche();
        printf("\n");

    }while(reply == 'y' || reply == 'Y');


    return 0;
}
