#include <stdio.h>


/*树的双亲表示法结点结构定义*/
#define MAX_TREE_SIZE 100
typedef int ElemType;                   /*树结点的数据类型，目前暂定为整型*/
typedef struct PTNode                   /*结点结构*/
{
    TElemType data;                     /*结点数据*/
    int parent;
}PTNode;

typedef struct                          /*树结构*/
{
    PTNode nodes[MAX_TREE_SIZE];        /*结点数组*/
    int r, n;                           /*根的位置和结点数*/
} PTree;