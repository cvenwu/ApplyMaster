/*
 【例】计算用户输入的两正整数之间的所有整数中0，1，2，…，9数码的个数。
 例如，101～104之间总共包含四个整数101，102，103，104，
 其中0的个数为4，1的个数为5，2、3、4的个数都为1，其余数码没出现都为0。
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num1, num2, i, temp, count0, count1, count2, count3, count4, count5, count6, count7, count8, count9;
    printf("Please input two numbers : ");
    scanf("%d %d", &num1, &num2);
    for(i = num1; i <= num2; i++)
    {
        do{
            temp = temp % 10;
            switch(temp)
            {
                case 0: count0++; break;
                case 1: count1++; break;
                case 2: count2++; break;
                case 3: count3++; break;
                case 4: count4++; break;
                case 5: count5++; break;
                case 6: count6++; break;
                case 7: count7++; break;
                case 8: count8++; break;
                case 9: count9++; break;
            }

            temp = i / 10;
        }while(temp != 0);
    }
    return 0;
}
