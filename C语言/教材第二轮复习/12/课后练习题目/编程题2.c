/**
 * 编写一个程序，其功能是将两个文件的内容合并到一个文件中，并显示合并后的文件内容，三个文件名
 * 随命令行一起输入，输入时原有两文件的文件名在前，合并文件的文件名在后
 **/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
    FILE *source1, *source2, *dest;
    if(argc != 4)
    {
        printf("Too few or more argumets!\n");
        exit(0);
    }

    if((source1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Open the first source file error!\n");
        exit(0);
    }

    if((source2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Open the second source file error!\n");
        exit(0);
    }

    if((dest = fopen(argv[3], "w")) == NULL)
    {
        printf("Open destination source file error!\n");
        exit(0);
    }

    char string[1024];
    
    while(fgets(string, 1023, source1) != NULL)
        fputs(string, dest);
    fputs("\n", dest);
    while(fgets(string, 1023, source2) != NULL)
        fputs(string, dest);
    fclose(source1);
    fclose(source2);
    fclose(dest);
}
