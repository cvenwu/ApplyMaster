#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = printf("\n");
    int d = printf("%d", i);
    printf("%d", d);
    return 0;
}
