#include <stdio.h>

typedef int ElemType;

typedef struct ThreadNode {
    ElemType data;                                      //数据元素
    struct ThreadNode *lchild, *rchild;                 //左右孩子指针
    int ltag, rtag;                                     //左右线索标志

    /**
     *  ltag = 0       指向其左子树 
     *       = 1       指向其前驱
     *  rtag = 0       指向右子树
     *       = 1       指向后继
     * 
     **/

} ThreadNode, *ThreadTree;


void main(int argc, char const *argv[])
{
    
    return;
}
