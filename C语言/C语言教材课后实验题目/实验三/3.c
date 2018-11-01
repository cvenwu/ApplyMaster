#include <stdio.h>
int main(int argc, char const *argv[])
{
    char m;
    double r;
    
    scanf("%lf %c", &r, &m);
    if(m == 's')
        printf("area : %lf\n", 3.14 * r * r);
    else if(m == 'a')
        printf("area: %lf,perimeter: %lf\n", 3.14 * r * r, 2 * 3.14 * r);
    else if(m == 'c')
        printf("perimeter: %lf\n", 2 * 3.14 * r);
    
    
    return 0;
}
