/*
编写一个函数insert(s1, s2, ch)，使得现在字符串s1中指定字符ch位置处插入字符串s2
*/
#include <stdio.h>
#include <string.h>
/*自己写的insert
void insert(char s1[], char s2[], char ch)
{
    int i;
    for(i = 0; i < sizeof(s1); i++)
        if(s1[i] == ch)
            break;
    char s3[] = strcpy(s1+i, s1+sizeof(s1));
    strcpy(s1+i, s2);
    strcpy(s1+i+sizeof(s2), s3);
}
*/
void insert(char s1[], char s2[], char ch)
{
    char *p, *q;
    p = s1;
    while(*p++ != ch);
    while(*s2 != '\0')
    {
        q = p;
        while(*q != '\0')
            q++;
        while(q >= p)
            *(q+1) = *q--;
        *++q = *s2++;
        
    }
}


int main(int argc, char const *argv[])
{
    char s1[] = "abcdefgh";
    char s2[] = "iop";
    insert(s1, s2, 'd');
    printf("%s", s1);
    return 0;
}
