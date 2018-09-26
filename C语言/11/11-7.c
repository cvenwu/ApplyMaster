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
	head = Create_LinkList();		//��������
	if (head == NULL)
		return;
	printf("after create: ");
	Display_LinkList(head);			//��������е�ֵ
	
	pnew = (NODE *)malloc(sizeof(NODE));	//�½�һ����Ľڵ�
	
	if(pnew == NULL)
	{
		printf("no enough memory!\n");
		return;	
	}
	
	pnew->score=88;
	Insert_LinkList(head, pnew, 3);			//���½ڵ����ڵ�3�ĺ���
	printf("after insert: ");
	Display_LinkList(head);					//��������е�ֵ
	
	Delete_LinkList(head, 3);				//ɾ�������нڵ�3
	printf("after delete: ");
	
	Display_LinkList(head);
	
	Free_LinkList(head);					//�������� 
	
}

/*����������*/ 
NODE *Create_LinkList()
{
	NODE *head, *tail, *pnew;
	int score;
	
	head = (NODE *)malloc (sizeof(NODE));	//����ͷ�ڵ�
	if(head == NULL)
	{
		printf("no enough memory!\n");
		return (NULL);	
	}
	
	head->next==NULL;	//ͷ�ڵ��ָ������NULL
	tail = head;		//��ʼʱβָ��ָ��ͷ�ڵ�
	
	printf("input the score of students:\n");
	while(1)
	{
		scanf("%d", &score);	//����ɼ�
		if(score < 0)			//�ɼ�Ϊ��,ѭ���˳� 
			break;
		pnew = (NODE *)malloc(sizeof(NODE));		//����һ�½ڵ� 
		if(pnew == NULL)							//�����½ڵ�ʧ��,�򷵻� 
		{
			printf("no enough memory!\n");
			return (NULL);
		}
		
		pnew->score=score;							//�½ڵ������������ĳɼ� 
		pnew->next=NULL;							//�½ڵ�ָ������NULL
		
		tail->next=pnew;							//�½ڵ���뵽����β 
		tail=pnew; 									//βָ��ָ��ǰ��β�ڵ� 
	 }
	 
	 return (head);									//���ش��������ͷָ�� 
}

/*��������������*/
/*��pnew��ָ��Ľڵ���뵽��headΪͷָ�������ĵ�i���ڵ�֮��*/
void Insert_LinkList(NODE *head, NODE *pnew, int i)
{
	NODE *p;
	int j;
	
	p = head;
	for(j = 0; j < i && p != NULL; j++)				//��pָ��Ҫ����ĵ�i���ڵ� 
		p = p->next;
	
	if(p == NULL)									//���������е�i���ڵ㲻���� 
	{
		printf("the %d node not foundt!\n", i);
		return;
	}
	
	pnew->next=p->next;								//������ڵ��ָ����ָ���i���ڵ�ĺ�̽ڵ� 
	p->next=pnew;									//����i���ڵ��ָ����ָ�����ڵ� 
}

/*�������ٲ�������*/
void Free_LinkList(NODE *head)
{
	NODE *p, *q;
	
	p = head;
	while(p->next != NULL)
	{
		q=p->next;
		p->next=q->next;
		free(q);	
	}	
	free(head);
}

/*���������������*/
void Display_LinkList(NODE *head)
{
	NODE *p;
	
	for(p=head->next; p != NULL; p=p->next)
	{
		printf("%d ", p->score);
	}
	
	printf("\n");
}

/*����ɾ����������*/
/*ɾ����headΪͷָ�������ĵ�i���ڵ�*/
void Delete_LinkList(NODE *head, int i)
{
	NODE *p, *q;
	int j;
	
	if(i == 0)									//ɾ������ͷָ��,�򷵻� 
		return;
	
	p = head;
	for(j = 1; j < i && p->next != NULL;j++)
		p = p->next;							//��pָ��Ҫɾ���ĵ�i���ڵ��ǰ���ڵ� 
	
	if(p->next==NULL)							//���������е�i���ڵ㲻���� 
	{
		printf("the %d node not foundt!\n", i);
		return;
	}
	
	q = p->next;								//qָ���ɾ���Ľڵ�i 
	p->next = q->next;							//ɾ���ڵ�i,Ҳ��д��p->next=p->next->next 
	free(q);									//�ͷŽڵ�i���ڴ浥Ԫ 
	
	
}



