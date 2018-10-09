#include <stdio.h>

InitQueue(*Q)           /*初始化操作，建立一个空队列Q*/
DestroyQueue(*Q)        /*若队列Q存在，则销毁它*/
ClearQueue(*Q)          /*将队列Q清空*/
QueueEmpty(Q)           /*若队列Q为空，返回true,否则返回false*/
GetHead(Q, *e)          /*若队列Q存在且非空，用e返回队列Q的队头元素*/
EnQueue(*Q, e)          /*若队列Q存在，插入新元素e到队列Q中并成为队尾元素*/
DeQueue(*Q, *e)         /*删除队列Q中队头元素，并用e返回其值*/
QueueLength(Q)          /*返回队列Q元素的个数*/