#ifndef __LinkList_H__
#define __LincList_H__

typedef int DataType;

typedef struct Node
{
    DataType Data;
    struct Node* Next;
}Node, *LinkList;

void InitList(LinkList* PHead);   //单链表的初始化
int ListEmpty(LinkList PHead);    //判断单链表是否为空
void CreatFormHead(LinkList PHead); //头插法建表
void CreatFormTail(LinkList PHead); //尾插法建表
Node* Get(LinkList PHead, int i);  //按序号查找
int Locate(LinkList PHead, DataType data); //按值查找
int length(LinkList PHead); //求表长操作
void InsList(LinkList PHead, int i, DataType data); //插入操作
int DelList(LinkList PHead, int i, DataType* data); //删除操作
void DestoryList(LinkList PHead);  //销毁顺序表
void PrintList(LinkList PHead);    //打印表中元素

#endif 
