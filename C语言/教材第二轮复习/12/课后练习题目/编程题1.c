/**
 * 编写一程序，其功能是显示指定的文本文件，在显示文件内容的同时加上行号
 **/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    FILE *file;
    if((file = fopen(argv[1], "rt")) == NULL)
    {
        printf("Open File Error!\n");
        exit(0);
    }
    char string[81];
    int line = 1;
    while(fgets(string, 80, file) != NULL)
    {
        printf("%d：",line);
        puts(string);
        line++;
    }
        
    
    fclose(file);
    
    return 0;
}
