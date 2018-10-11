#include <stdio.h>



/**
 * 顺序查找
 * 返回值：返回0表示查找失败，返回非0为元素的位置
 * a为数组
 * n为要查找的元素个数
 * key为要查找的关键字
 **/
int Sequetial_Search(int *a, int n, int key)
{
    int i;
    for(i = 1; i <= n; i++)
        if(a[i] == key)
            return i;
    
    return 0;                           //查找失败
}


/**
 * 顺序表查找优化: 利用哨兵(存放在a[0]位置)进行查找，可以避免每次i与n进行比较判断是否越界
 * 返回值：返回0表示查找失败，返回非0为元素的位置
 * a为数组
 * n为要查找的元素个数
 * key为要查找的关键字
 **/
int Sequential_Search2(int *a, int n, int key)
{
    int i;
    a[0] = key;             /*设置a[0]为关键字，我们称之为哨兵*/
    i = n;                  /*循环从数组尾部开始*/
    while(a[i] != key)
        i--;
    
    return i;               /*返回0说明查找失败*/
}


/**
 * 折半查找
 * 返回值：返回0表示查找失败，返回非0为元素的位置
 * a为数组
 * n为要查找的元素个数
 * key为要查找的关键字
 * */
int Binary_Search(int *a, int n, int key)
{
    int low, high, mid;
    low = 1, high = n;                      /*定义最低下标和最高下标*/
    while(low <= high)                      
    {
        mid = (low + high) / 2;             /*折半*/
        if(key < a[mid])                    /*若查找值比中值小*/
            high = mid - 1;                 /*最高下标调整到中标小一位*/
        else if(key > a[mid])               /*若查找值比中值大*/
            low = mid + 1;                  /*最高下标调整到中标大一位*/
        else                                /*若相等，则说明mid即为查找到的位置*/
            return mid;
    }

    return 0;
}


int main(int argc, char const *argv[])
{
    int a[] = {0, 1, 16, 24, 35, 57, 59, 62, 73, 88, 99};
    printf("%d\n", Binary_Search(a, 10, 62));
    return 0;
}
