#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    char ch1, ch2, ch;
    unsigned char c;
    int a;

    ch1 = 80;
    ch2 = 60;
    ch = ch1 + ch2;
    c = ch1 + ch2;
    a = ch1 + ch2;
    
    printf("%d\n", sizeof(ch1 + ch2));
    printf("ch1 + ch2 = %d\n", ch1 + ch2);
    printf("ch = %d\n", ch);                    //修改这一行为printf("ch = %u\n", (unsigned char)ch);
    printf("c = %d\n", c);
    printf("a = %d\n", a);

    return 0;
}
