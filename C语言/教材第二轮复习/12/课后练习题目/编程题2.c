/**
 * 编写一个程序，其功能是将两个文件的内容合并到一个文件中，并显示合并后的文件内容，三个文件名
 * 随命令行一起输入，输入时原有两文件的文件名在前，合并文件的文件名在后
 **/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("h\n");
    FILE *source, *source2, *destin;
    if((source = fopen(argv[1], "r")) == NULL)
    {
        printf("Open Source File Error!\n");
        exit(0);
    }

    if((source2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Open Source2 File Error!\n");
        exit(0);
    }

    if((source2 = fopen(argv[3], "w")) == NULL)
    {
        printf("Open Destination File Error!\n");
        exit(0);
    }
    printf("hello world!\n");
    char string[1024];
    while(fgets(string, 1023, source) != NULL || fgets(string, 1023, source2) != NULL)
        fputs(string, destin);
    

    fclose(source);
    fclose(source2);
    fclose(destin);


    return 0;

}