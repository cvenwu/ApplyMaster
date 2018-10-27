#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num[20], i, count = 0, sum = 0;
    
    for(i = 0; i < 20; i++)
        scanf("%d", &num[i]);
    
    for(i = 0; i < 20; i++)
        if(num[i] >= 0)
        {
            count++;
            sum += num[i];
        }
        
    printf("非负数有%d个,非负数之和为%d\n", count, sum);
    return 0;
}
