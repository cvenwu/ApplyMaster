#include <stdio.h>


/*树的孩子兄弟结构法表示定义*/
typedef struct CSNode
{
    TElemType data;
    struct CSNode *firstchild, *rightsib;
}CSNode, *CSTree;