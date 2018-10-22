/**
 *  编写文本文件显示程序，在命令行中指定文本文件显示的范围。如下所示
 * 
 * type filename m n
 * 其中type为执行文件，filename是要显示的文本文件名，
 * m和n指定了显示的范围，即显示从m行到n行的内容
 * 当m和n不指定的时候，显示文件全部内容
 **/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file;
    int line = 1;

    int m, n;
    if((file = fopen(argv[1], "r")) == NULL)
    {
        printf("Open File Error!\n");
        exit(0);
    }

    char string[1024];

    if(argc == 3)
    {
        m = (int)argv[1];
        n = (int)argv[2];
        while(fgets(string, 1023, file) != NULL)
        {
            line++;
            if(line >= m && line <= n)
                puts(string);
        }
    }else{
        while(fgets(string, 1023, file) != NULL)
        {
            puts(string);
            line++;
        }
    }

    fclose(file);

    
    return 0;
}
