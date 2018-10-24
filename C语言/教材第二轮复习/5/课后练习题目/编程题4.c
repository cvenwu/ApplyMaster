
#include <stdio.h>
#include <stdlib.h>


void main(int argc, char const *argv[])
{
    printf("*****Time*****\n");
    printf("1\t\tmorning\n");
    printf("2\t\tafternoon\n");
    printf("3\t\tnight\n");
    printf("Please enter your choice : ");


    int choice;
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Good Morning!\n");
            break;
        case 2:
            printf("Good afternoon!\n");
            break;
        case 3: 
            printf("Good Night!\n");
            break;
        default:
            printf("Selection error!\n");
            break;
    }
    return;
}
