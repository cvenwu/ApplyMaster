#include <stdio.h>

typedef char CHAR;
typedef char ARRAY[81];
int main(int argc, char const *argv[])
{
    /*
    long num = 3;
    printf("%d\n", sizeof(num));
    return 0;*/
    CHAR string[81];
    string[0] = 'a';
    string[1] = 'b';
    printf("%s\n", string);

    ARRAY a;
    printf("%d", sizeof(a));
    
}
