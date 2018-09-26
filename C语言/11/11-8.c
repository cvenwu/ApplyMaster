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
	head = Create_LinkList();	//��������
	if(head == NULL)
		return;
	printf("after create: ");
	Display_LinkList(head);		//��������е�ֵ
	
	pnew = (NODE *)malloc(sizeof(NODE)); //�½��Բ���Ľڵ�
	if(pnew == NULL)
	{
		printf("no enough memory!\n");
		return; 
	}
	
	pnew->score = 88;
	Insert_LinkList(head, pnew, 3);		//���½ڵ����ڵ�3�ĺ��� 
	printf("after insert: ");
	
	Display_LinkList(head);				//��������е�ֵ
	Delete_LinkList(head, 3);			//ɾ�������нڵ�3
	printf("after delete: ");
	Display_LinkList(head);				//��������е�ֵ
	
	Free_LinkList(head);				//�������� 
	  
		
} 
