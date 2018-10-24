#include <stdio.h>
/*
void main(int argc, char const *argv[])
{
    int num, three, seven, five;
    printf("Please input one number : ");
    scanf("%d", &num);

    three = (num % 3) ? 0 : 1;
    five = (num % 5) ? 0 : 1;
    seven = (num % 7) ? 0 : 1;

    if(three && five && seven)
        printf("可以被3, 5, 7同时整除!\n");
    else if(three + five + seven == 2)
    {
        if(three == 0)
            printf("可以被5,7同时整除!\n");
        else if(five == 0)
            printf("可以被3,7同时整除!\n");
        else
            printf("可以被3,5同时整除!\n");
        
    }else if(three + five + seven == 1)
    {
        if(three == 1)
            printf("可以被3整除!\n");
        else if(five == 1)
            printf("可以被5整除!\n");
        else
            printf("可以被7整除!\n");
    }else
        printf("不能被3, 5, 7任一个整除!\n");

    return;
}
*/

void main()
{
    /*改进版本*/
    int x;
    char tag;
    printf("Input a integer number : ");
    scanf("%d", &x);
    
    tag = 0;
    if(x % 3 == 0)
        tag = tag | 4;
    if(x % 5 == 0)
        tag = tag | 2;
    if(x % 7 == 0)
        tag = tag | 1;


    switch(tag)
    {
        case 0: printf("不能被3,5,7同时整除!\n");
                break;
        case 1: printf("可以被7整除!\n");
                break;
        case 2: printf("可以被5整除!\n");
                break;
        case 3: printf("可以被5,7整除!\n");
                break;
        case 4: printf("可以被3整除!\n");
                break;
        case 5: printf("可以被3,7整除!\n");
                break;
        case 6: printf("可以被3,5整除!\n");
                break;
        case 7: printf("可以被3, 5, 7整除!\n");
                break;
        
    } 
}