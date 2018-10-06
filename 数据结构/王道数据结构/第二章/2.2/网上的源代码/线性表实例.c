#include <stdio.h>
#include <Windows.h>
#include "SeqList.h"

int main()
{
    SeqList L;
    DataType data;
    //初始化顺序表
    InitList(&L);
    //在表中插入元素
    printf("依次在表中插入元素(1,2,3,4,5)：\n");
    InsList(&L, 1, 1);
    InsList(&L, 2, 2);
    InsList(&L, 3, 3);
    InsList(&L, 4, 4);
    InsList(&L, 5, 5);

    //打印表中元素
    printf("表中元素有：\n");
    PrintList(&L);
    //头插
    printf("在表头依次插入元素，6,7:\n");
    PushFront(&L, 6);
    PushFront(&L, 7);
    //尾插
    printf("在表尾依次插入元素，8,9:\n");
    PushBack(&L, 8);
    PushBack(&L, 9);
    printf("表中元素有：\n");
    PrintList(&L);
    //头删
    printf("头删一个元素:\n");
    PopFront(&L);
    //尾删
    printf("尾删一个元素:\n");
    PopBack(&L);
    //输出表中第4个元素值
    PrintList(&L);
    printf("表中第4个元素值为：\n%d\n",GetData(&L, 4));
    //查找表中第 i个元素的位置
    printf("元素2在表中的位置为：\n");
    printf("%d\n",Locate(&L, 2));
    //删除表中第2个元素对应的值
    printf("删除表中第2个元素：%d\n", DelList(&L, 2, &data));
    printf("顺序表的长度为：%d\n", LengthList(&L));
    printf("表中元素为：\n");
    PrintList(&L);
    //printf("删除的元素值为：%d\n", data);
    //清空顺序表
    ClearList(&L);
    PrintList(&L);
    system("pause");
    return 0;
}
