#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char string[] = "daq\0eq";
    int a[20];
    printf("%s\n", string);
    puts(string);
    printf("%d\n", sizeof(a));
    printf("%d\n", strlen(string));
    return 0;
}
