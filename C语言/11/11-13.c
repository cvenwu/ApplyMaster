#include <stdio.h>
#include <stdlib.h>

enum SEX {man, female};
struct Student_Info
{
	char no[9];
	char name[20];
	enum SEX sex;
	unsigned int age;
	unsigned int classno;
	float grade;	
};

typedef struct Student_Info STUDENT;

STUDENT *GetStuInfo(int i);
void SortStuInfo(STUDENT **pstu, int num);
void FreeMemory(STUDENT **pstu, int num);


void main()
{
	STUDENT **pstu;	
	int i, num;
	
	printf("input the number of the students: ");		//����ѧ������
	scanf("%d", &num);
	if(num <= 0)
		return;
	
	//��̬�����ṹ������ָ��
	pstu = (STUDENT **)malloc(num * sizeof(STUDENT *));
	if(pstu == NULL) 
	{
		printf("not enough memory!\n");
		return;
	}
	
	
	//����ÿ��ѧ������Ϣ��
	for(i = 0; i < num; i++)
	{
		pstu[i] = GetStuInfo(i);	 
		if(pstu[i] == NULL) 				//�����ڴ�ʧ�� 
		{
			printf("not enough memory!\n"); 
			FreeMemory(pstu, i);			//�ͷ�ǰ�������ڴ� 
			return;
		}
	}
	
	SortStuInfo(pstu, num);		//��ѧ����Ϣ�������Ӹߵ�������
	
	printf("\n=====================sort result=====================\n");
	for(i = 0; i < num; i++)		//��ʾ�����Ľ��
		printf("%12s%20s%9s%5d%5d%8.1f\n", pstu[i]->no, pstu[i]->name, (pstu[i]->sex==man) ? "man" : "female", pstu[i]->age, pstu[i]->classno, pstu[i]->grade);
	
	FreeMemory(pstu, num);		//�ͷŶ�̬������ڴ� 
}

//����ѧ������Ϣ
STUDENT *GetStuInfo(int i)
{
	STUDENT *p;
	char sex;
	
	
	p = (STUDENT *)malloc(sizeof(STUDENT));
	if(p == NULL)
		return NULL;
	
	printf("\n=======input %dth student's information======\n", i+1);
	printf("no: ");
	scanf("%s", p->no);
	printf("name: ");
	scanf("%s", p->name);
	fflush(stdin);			//������̻�����
	while(1)
	{
		printf("sex(M,F) : ");
		scanf("%c", &sex);
		if(sex == 'M' || sex == 'F')
			break;
		fflush(stdin);
	 } 
	 
	 p->sex=(sex=='M') ? man : female;
	 printf("age: ");
	 scanf("%d", &p->age);
	 printf("classno: ");
	 
	 scanf("%d", &p->classno);
	 printf("grade: ");
	 scanf("%f", &p->grade);
	 return (p);
}


//��ѧ����Ϣ�������Ӹߵ�������
void SortStuInfo(STUDENT **pstu, int num)
{
	STUDENT *p;
	int i, j, k;
	for(i = 0; i < num-1; i++)
	{
		k = i;
		for(j = i + 1; j < num; j++)
			if(pstu[j]->grade > pstu[k]->grade)
				k = j;
		if(k != i)
		{
			p = pstu[i];
			pstu[i] = pstu[k];
			pstu[k] = p;
		}
	}
}

//�ͷŶ�̬������ڴ�
void FreeMemory(STUDENT **pstu, int num)
{
	int i;
	for(i = 0; i < num; i++)		//���ͷ�ÿ������Ԫ����ָ����ڴ�� 
		free(pstu[i]);	
	
	free(pstu);						//����ͷŽṹ������ָ�� 
 } 
