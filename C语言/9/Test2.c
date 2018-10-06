#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void main(int argc, char const *argv[])
{
    int n,*pscore;
    scanf("%d", &n);
    pscore = (int *)malloc(n * sizeof(int));
    if(pscore == NULL)
    {
        printf("Insufficient memory available!");
        exit(0);
    }


    printf("分配内存成功!\n");
}
