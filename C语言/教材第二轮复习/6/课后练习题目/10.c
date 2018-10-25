#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 150, i, j, q, count = 0;
    for(i = 1; i <= 30; i++)
    {
        for(j = 1; j <= 75; j++)
        {
            for(q = 1; q <= 98; q++)
            {
                if(j * 2 + q + i * 5 == num && i + j + q == 100 )
                {
                    count++;
                    printf("5分需要%d个, 2分需要%d个, 1分需要%d个\n", i, j, q);
                }
            }
        }
    }
    return 0;
}