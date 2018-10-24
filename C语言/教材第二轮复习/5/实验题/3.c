#include <stdio.h>
#define PI 3.14

void main(int argc, char const *argv[])
{
    double r, area, perm;
    char m;
    m = getchar();
    printf("%c\n", m);
    printf("Please input the radius of circle : ");
    scanf("%lf", &r);
    if(m == 's')
        area = PI * r * r; 
    else if(m == 'c')
        perm = 2 * PI * r;
    else if(m == 'a')
    {
        area = PI * r * r;
        perm = 2 * PI * r;
    }


    printf("%lf %lf\n", area, perm);

    return;
}
