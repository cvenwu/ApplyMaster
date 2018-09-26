#include <stdio.h>
#include <stdlib.h>


struct Grade_Info
{
	int score;
	struct Grade_Info *next;
};

typedef struct Grade_Info NODE;


NODE *Create_LinkList();
void Insert_LinkList(NODE *head, NODE *pnew, int i);
void Delete_LinkList(NODE *head, int i);
void Display_LinkList(NODE *head);
void Free_LinkList(NODE *head);
 

void main()
{
	NODE *head, *pnew;
	head = Create_LinkList();	//创建链表
	if(head == NULL)
		return;
	printf("after create: ");
	Display_LinkList(head);		//输出链表中的值
	
	pnew = (NODE *)malloc(sizeof(NODE)); //新建以插入的节点
	if(pnew == NULL)
	{
		printf("no enough memory!\n");
		return; 
	}
	
	pnew->score = 88;
	Insert_LinkList(head, pnew, 3);		//将新节点插入节点3的后面 
	printf("after insert: ");
	
	Display_LinkList(head);				//输出链表中的值
	Delete_LinkList(head, 3);			//删除链表中节点3
	printf("after delete: ");
	Display_LinkList(head);				//输出链表中的值
	
	Free_LinkList(head);				//销毁链表 
	  
		
} 
