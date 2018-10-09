#include <stdio.h>



/*二叉树的二叉链表结点结构定义*/
typedef struct BiTNode              /*结点结构*/
{
    TElemType data;                 /*结点数据*/
    struct BiTNode *lchild, *rchild;        /*左右孩子指针*/
} BiTNode, *BiTree;