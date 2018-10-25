#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 1;
    double n = 2, m = 1, temp = 1;
    while(count <= 100)
    {
        temp = temp * (n / m) * (n / (m + 2));
        count += 2, n += 2, m += 2;
    }

    printf("%lf\n", temp * 2);
    return 0;
}
