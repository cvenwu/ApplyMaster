#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *p1, *p2, *p, a, b;
    
    scanf("%d,%d", &a, &b);
    p1 = &a, p2 = &b;                   //p1指向指针变量a，p2指向指针变量b
    if(a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }

    printf("a=%d,b=%d\n", a, b);
    printf("max=%d, min=%d\n", *p1, *p2);



    return 0;
}
