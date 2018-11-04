#include <stdio.h>

#define ElemType int

typedef struct {                //查找表的数据结构
    ElemType *elem;             //元素存储空间地址，建表时按实际长度分配，0号单元留空
    int TableLen;               //表的长度
}SSTable;

int Search_Seq(SSTable ST, ElemType key)
{
    int i;
    //在顺序表ST中顺序查找关键字为key的元素。若找到元素返回该元素在表中的位置
    ST.elem[0] = key;                                           //"哨兵"
    for(i = ST.TableLen; ST.elem[i] != key; --i)                //从后往前找
        return i;                                               //若表中不存在关键字为key的元素，将查找到i为0时退出for循环
}
