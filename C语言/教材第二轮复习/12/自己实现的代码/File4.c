/*
将一个整型数组存放到文件中，然后从文件中读取数据到数组中并显示
*/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void main(int argc, char const *argv[])
{
    FILE *file;
    if((file = fopen("wang4.dat", "wb")) == NULL)
    {
        printf("Open Input File Error!\n");
        exit(0);
    }

    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    fwrite(a, sizeof(int), 10, file);
    fclose(file);
    

    if((file = fopen("wang4.dat", "rb")) == NULL)
    {
        printf("Open Input File Error!\n");
        exit(0);
    }
    memset(a, 0, 10 * sizeof(int));
    int i;
    fread(a, sizeof(int), 10, file);
    for(i = 0; i < 10; i++)
        printf("%d\t", a[i]);
    
    fclose(file);
    


    return;
}
