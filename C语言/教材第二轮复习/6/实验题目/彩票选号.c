#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int k;
    for(k = 1; k < 15; k++)
        if(7 * k + 56 == 105)
            printf("%d %d %d %d %d %d %d\n", k, k+1, k+3, k+6, k+10, k+15, k+21);
            
    return 0;
}
