#include <stdio.h>
/*输入10个整数,并将这10个整数按升序排列输出,并且奇数在前偶数在后*/
int main(int argc, char const *argv[])
{
    int num[10], i, j, odd = 0, even = 9, temp;
    for(i = i; i <= 9; i++)
    {
        scanf("%d", &temp);
        if(temp % 2 != 0)
            num[odd++] = temp;
        else
            num[even--] = temp;
    }
    for(i = 0; i <= 9; i++)
        printf("%d\t", num[i]);
    printf("\n");


    /*排列完之后，最终一定有odd = even + 1*/
    for(i = 1; i <= odd - 1; i++)
    {
        for(j = 0; j < odd - i; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(i = 1; i <= 6 - even ; i++)
    {
        for(j = even + 2; j <= 8; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
        
    for(i = 0; i <= 9; i++)
        printf("%d\t", num[i]);
    printf("\n");
}
