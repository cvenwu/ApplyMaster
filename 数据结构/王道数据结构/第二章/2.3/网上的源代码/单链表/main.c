#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "LinkList.h"

int main()
{
    LinkList L;
    LinkList L1;
    DataType data;
    int num;   //需要操作的元素序号
    int val;   //插入元素值 
    InitList(&L);
    InitList(&L1);
    printf("头插法建表(L1)：");
    CreatFormHead(L1);
    printf("链表中的元素有:\n");
    PrintList(L1);
    printf("\n");
    printf("尾插法建表(L)：");
    CreatFormTail(L);
    //后面为对尾插法所建表的操作
    printf("链表中的元素有:\n");
    PrintList(L);
    printf("\n");
    printf("在链表中插入一个元素：\n");
    printf("请输入插入位置：");
    scanf("%d", &num);
    printf("请输入插入元素值：");
    scanf("%d", &val);
    InsList(L, num, val);
    printf("链表中的元素有:\n");
    PrintList(L);
    printf("\n");
    printf("删除链表中的元素:\n");
    printf("请输入删除位置：");
    scanf("%d", &num);
    DelList(L, num, &data);
    printf("删除元素的值为%d\n", data);
    printf("\n");
    printf("链表中的元素有:\n");
    PrintList(L);
    printf("\n");
    printf("链表的长度为：%d\n", length(L));
    printf("\n");
    printf("请输入要查找的元素序号：\n");
    scanf("%d", &num);
    Node* p = Get(L, num);
    printf("第%d 个元素值为：%d\n", num, p->Data);
    printf("请输入要查找的元素值：\n");
    scanf("%d", &val);
    printf("%d在表中的位置序号为：%d\n", val, Locate(L, val));
    printf("\n");
    system("pause");

    return 0;
}
