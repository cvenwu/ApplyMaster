#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int num, temp, sum = 0;
    printf("Please input a number : ");
    scanf("%d", &num);
    temp = num;
    while(num / 10)
    {
        sum = sum * 10 + num % 10;
        num /= 10;
    }

    sum = sum * 10 + num;
    if(sum == temp)
        printf("是回文数!\n");
    else
        printf("不是回文数!\n");

    printf("%d\n", sum);

}
