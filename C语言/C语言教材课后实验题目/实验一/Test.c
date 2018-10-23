#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");


    char c = getchar();
    printf("%c\n", c);
    printf("%c%c\n", c,c);
    printf("%c%c%c\n", c,c,c);
    printf("%c%c%c%c\n", c,c,c,c);

    getchar();
    return 0;
}
