#include <stdio.h>
#include <stdlib.h>

union myun
{
    struct {
        int x, y, z;
    } u;
    int k;
} a;


int main(int argc, char const *argv[])
{
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;
    a.k = 0;
    printf("%d %d %d %d \n", a.u.x, a.u.y, a.u.z, a.k);
    return 0;
}


