#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int line, count;
    for(line = 1; line <= 5; line++)
    {
        
    }

    for(line = 1; line <= 5; line++)
    {
        for(count = 5 - line; count >= 1; count--)
            printf(" ");
        printf("*****");
        printf("\n");
    }


    printf("\n");
    for(line = 1; line <= 5; line++)
    {
        for(count = 1; count <= (line - 1) * 2 + 1; count++)
            printf("*");
        printf("\n");
    }


    return 0;
}
