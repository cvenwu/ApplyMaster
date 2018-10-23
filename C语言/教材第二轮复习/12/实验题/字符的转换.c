
/**
 * 
 * 题目：文件中大小写英文字符的转换
 * 编写一程序，将某文本文件中的大写英文字符转换为小写字符，小写英文字符转换成大写英文字符，其他字符不变
 * 要求：要求转换的文件名通过命令行参数提供
 **/


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    if(argc != 2)
    {
        printf("Too few or too more arguments!\n");
        exit(0);
    }

    FILE *file;
    if((file = fopen(argv[1], "r")) == NULL)
    {
        printf("Open File Error!\n");
        exit(0);
    }

    char temp;
    while((temp = fgetc(file)) != EOF)
    {
        if(temp >= 'A' && temp <= 'Z')
        {
            temp = temp + 32;
        }else if(temp >= 'a' && temp <= 'z')
        {
            temp = temp - 32;
        }


        
    }


    
    return 0;
}
