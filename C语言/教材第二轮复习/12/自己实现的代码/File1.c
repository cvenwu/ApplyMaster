

/**
 * 【例1】 将键盘上输入的一个字符串（以‘@’作为结束字符），
 * 以ASCII码形式存储到一个磁盘文件中，然后从该磁盘文件中读出其字符串并显示出来。
**/
#include <stdlib.h>
#include <stdio.h>
void main(int argc, char const *argv[])
{
    FILE *f1, *f2;
    char ch;
    if(argc != 2)
    {  
        printf ("the number of arguments not correct\n\n");
        printf ("Usage: 可执行文件名  filename \n");
        exit (0);
    }

    
    if((f1 = fopen(argv[1], "w+")) == NULL)
    {
        printf("File Open Error!\n");
        exit(0);
    }   


    while((ch = getchar()) != '@')
    {
        fputc(ch, f1);    
    }

    if(fclose(f1) != 0)
    {
        printf("File Close Error!\n");
        exit(0);
    }


    if((f2 = fopen(argv[1], "r")) == NULL)
    {
        printf("File Open Error!\n");
        exit(0);
    }


    while((ch = fgetc(f2)) != EOF)
        printf("%c", ch);

    printf("\n");
    fclose(f2);


    return;
}
