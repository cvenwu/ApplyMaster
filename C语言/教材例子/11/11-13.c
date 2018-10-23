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
	
	printf("input the number of the students: ");		//输入学生人数
	scanf("%d", &num);
	if(num <= 0)
		return;
	
	//动态建立结构体数组指针
	pstu = (STUDENT **)malloc(num * sizeof(STUDENT *));
	if(pstu == NULL) 
	{
		printf("not enough memory!\n");
		return;
	}
	
	
	//建立每个学生的信息表
	for(i = 0; i < num; i++)
	{
		pstu[i] = GetStuInfo(i);	 
		if(pstu[i] == NULL) 				//分配内存失败 
		{
			printf("not enough memory!\n"); 
			FreeMemory(pstu, i);			//释放前面分配的内存 
			return;
		}
	}
	
	SortStuInfo(pstu, num);		//对学生信息按分数从高到低排序
	
	printf("\n=====================sort result=====================\n");
	for(i = 0; i < num; i++)		//显示排序后的结果
		printf("%12s%20s%9s%5d%5d%8.1f\n", pstu[i]->no, pstu[i]->name, (pstu[i]->sex==man) ? "man" : "female", pstu[i]->age, pstu[i]->classno, pstu[i]->grade);
	
	FreeMemory(pstu, num);		//释放动态分配的内存 
}

//输入学生的信息
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
	fflush(stdin);			//清楚键盘缓冲区
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


//将学生信息按分数从高到低排序
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

//释放动态分配的内存
void FreeMemory(STUDENT **pstu, int num)
{
	int i;
	for(i = 0; i < num; i++)		//先释放每个数组元素所指向的内存块 
		free(pstu[i]);	
	
	free(pstu);						//最后释放结构体数组指针 
 } 
