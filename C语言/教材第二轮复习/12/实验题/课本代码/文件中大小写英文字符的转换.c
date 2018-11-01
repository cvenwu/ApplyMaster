#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
    FILE *fpr, *fpw;
    char ch;

    if(argc != 2)
    {
        printf("Useage: 执行文件名 待转换文件名 \n");
        exit(0);
    }

    fpr = fopen(argv[1], "rb");
    if(fpr == NULL)
    {
        printf("file: %s not found!\n", argv[1]);
        exit(0);
    }
    fpw = fopen(argv[1], "rb+");
    if(fpw == NULL)
    {
        printf("file: %s not found!\n", argv[1]);
        exit(0);
    }
    
    while((ch = fgetc(fpr)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        else if(ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        fputc(ch, fpw);
    }

    fclose(fpr);
    fclose(fpw);


}