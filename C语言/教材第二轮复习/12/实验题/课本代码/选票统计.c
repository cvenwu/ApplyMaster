#include <stdio.h>
#include <stdlib.h>

#define Max 100

void main(int argc, char const *argv[])
{
    FILE *fp;
    int i, n, count[10];
    char ticket[13];

    for(i = 0; i < 10; i++)
        count[i]++;
    
    //从文件中读取选票信息,并统计结果
    if((fp = fopen("IN.DAT", "r")) == NULL)
    {
        printf("Cann't open file IN.DAT!");
        exit(0);
    }

    while(fgets(ticket, 13, fp) != NULL)
    {
        for(n = 0, i = 0; ticket[i] != '\0'; i++)
            if(ticket[i] == '1')
                n++;
        if(n <= 5)
            continue;
        for(i = 0; ticket[i] != '\0'; i++)
            if(ticket[i] == 'l')
                count[i]++;
    }

    fclose(fp);

    //将统计结果写入到OUT.DAT中,并在屏幕上进行显示
    if((fp = fopen("OUT.DAT", "w")) == NULL)
    {
        printf("Cann't create file OUT.DAT");
        exit(0);
    }

    for(i = 0; i < 10; i++)
    {
        fprintf(fp, "%d\n", count[i]);
        printf("第%d个人的选票数 = %d\n", i+1, count[i]);
    }

    fclose(fp);
}
