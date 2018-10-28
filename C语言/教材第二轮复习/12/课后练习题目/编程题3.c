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

void main(int argc, char const *argv[])
{
    FILE *file;
    int m, n, i = 0;
    if(argc == 2)
        m = -1, n = -1;
    else if(argc == 4)
    {
        m = atoi(argv[2]);
        n = atoi(argv[3]);
    }else{
        printf("illegal arguments!\n");
        exit(0);
    }
    if((file = fopen(argv[1], "r")) == NULL)
    {
        printf("File Open Error!\n");
        exit(0);
    }

    char string[1024];
    if(m == -1 && n == -1)
    {
        while(fgets(string, 1023, file) != NULL)
            printf("%s", string);
    }else{
        while(fgets(string, 1023, file) != NULL)
        {
            i++;
            if(i >= m && i <= n)
                printf("%s", string);
        }
    }

    fclose(file);
}

