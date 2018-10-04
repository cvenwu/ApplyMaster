#include <stdio.h>



typedef int ElemType;                           /*typedef 原名 新名*/
typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;                  /*定义LinkList*/

int main(int argc, char const *argv[])
{
    


    printf("Hello World!\n");

    return 0;
}
