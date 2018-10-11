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

/*插值查找*/
int InsertValue_Search(int *a, int n, int key)
{
    int low, high, mid;
    low = 1, high = n;                      /*定义最低下标和最高下标*/
    while(low <= high)                      
    {
        mid = (low + ((key - a[low])/(a[high] - a[low]))) / 2;             /*折半*/
        if(key < a[mid])                    /*若查找值比中值小*/
            high = mid - 1;                 /*最高下标调整到中标小一位*/
        else if(key > a[mid])               /*若查找值比中值大*/
            low = mid + 1;                  /*最高下标调整到中标大一位*/
        else                                /*若相等，则说明mid即为查找到的位置*/
            return mid;
    }

    return 0;
}

/*斐波那契查找*/
int Fibonacci_Search(int *a, int n, int key)
{
    int low, high, mid, i, k;
    low = 1;                                    /*定义最低下标为记录首位*/
    high = n;                                   /*定义最高下标为记录末位*/
    k = 0;
    while(n > F[k] - 1)                         /*计算n位于斐波那契数列的位置*/
        k++;

    for(i = n; i < F[k] - 1; i++)               /*将不满的数值补全*/
        a[i] = a[n];

    while(low <= high)
    {
        mid = low + F[k-1] - 1;             /*计算当前分隔的下标*/
        if(key < a[mid])                    /*若查找记录小于当前分隔记录*/
        {
            high = mid - 1;                 /*最高下标调整到分隔下标mid-1处*/
            k = k-1;                        /*斐波那契数列下标减一位*/
        }
        else if(key > a[mid])               /*若查找记录大于当前分隔记录*/
        {
            low = mid + 1;                  /*最低下标调整到分隔下标mid+1处*/
            k = k - 2;                      /*斐波那契数列减两位*/
        }
        else
        {
            if(mid <= n)
                return mid;                 /*若相等则说明mid即为查找到的位置*/
            else
                return n;                   /*若mid>n说明是补全数值，返回n*/
        }
    }
}


int main(int argc, char const *argv[])
{
    int a[] = {0, 1, 16, 24, 35, 57, 59, 62, 73, 88, 99};
    //printf("%d\n", Binary_Search(a, 10, 62));
    printf("%d\n", InsertValue_Search(a, 10, 62));
    return 0;
}
