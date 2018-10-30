#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[20] = "abcde", str2[20] = "xyz";
    strcpy(str2, str1);
    strcpy(str1, str2);

    return 0;
}
