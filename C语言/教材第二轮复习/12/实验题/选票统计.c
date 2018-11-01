

/**
 * 选票统计问题
 * 
 * 对10个候选人进行选举，现有一个不超过100条记录的选票数据文件IN.DAT,其数据存放的格式是每条记录的
 * 长度均为10位，第一位表示第一个人的选中情况，第二位表示第二个人的选中情况，依次类推。每一位内容均
 * 为字符0或1，1表示此人被选中，0表示此人未被选中，若一张选票选中人数小于等于5个人时则被认为是无效的
 * 选票，请编制一个程序来统计每个人的选票数，并把每个人的选票数输出到文件OUT.DAT中
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(int argc, char const *argv[])
{
    FILE *file, *dest;
    int count[10], n;
    char ch;
    memset(count, 0, 10 * sizeof(int));
    if((file = fopen("IN.DAT", "r")) == NULL)
    {
        printf("File Open Error!\n");
        exit(0);
    }

    while((ch = fgetc(file)) != EOF)
    {
        n++;
        if(count[n/10] >)
        if(ch == '1')
            count[n/10]++;
    }

    for(n = 0; n < 10; n++)
        printf("%d\t", count[n]);
    

    if((dest = fopen("OUT.txt", "w+")) == NULL)
    {
        printf("Dest File Open Error!\n");
        exit(0);
    }

    fputs(count, dest);

    
    fclose(file);
    fclose(dest);


}





