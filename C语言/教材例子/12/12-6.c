#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct student_info
{
	char no[9];
	char name[10];
	char sex;
	int age;
	char address[20];	
};

typedef struct student_info STUINFO;

void WriteToFile(STUINFO *pstu, int num);
void ReadFromFile(STUINFO *pstu, int num);

void main()
{
	int i, num;
	STUINFO *pstu;
	
	printf("input the number of students: ");
	scanf("%d", &num);							//����ѧ������
	fflush(stdin);
	
	pstu=(STUINFO *)malloc(num * sizeof(STUINFO));	//��̬�����ڴ�
	if(pstu == NULL)								//�ڴ����ʧ�� 
	{
		printf("not enough memory\n");
		return; 
	}
	
	for(i = 0; i < num; i++)
	{
		printf("the %dth student: no=", i+1);
		gets(pstu[i].no);
		fflush(stdin);
		printf("the %dth student: name=", i+1);
		gets(pstu[i].name);
		fflush(stdin);
		printf("the %dth student: sex=", i+1);
		gets(pstu[i].sex);
		fflush(stdin);
		printf("the %dth student: age=", i+1);
		gets(pstu[i].age);
		fflush(stdin);
		printf("the %dth student: address=", i+1);
		gets(pstu[i].address);
		fflush(stdin);
	}
	
	WriteToFile(pstu, num);	//��pstu��ָ���ѧ����Ϣд���ļ���
	memset(pstu, 0, num * sizeof(STUINFO));		//��pstu��ָ����ڴ����0
	ReadFromFile(pstu, num);	//���ļ��ж�ȡѧ����Ϣ��pstu��ָ����ڴ����
	
	//��ʾѧ������Ϣ
	printf("%10s%12s%6c%5d%20s\n", "no", "name", "sex", "age", "address");
	for(i = 0; i < num; i++)
		printf("%10s%12s%6c%5d%20s\n", pstu[i].no, pstu[i].name, pstu[i].sex, pstu[i].age, pstu[i].address);
	
	
	free(pstu);		//�ͷŶ�̬������ڴ� 
}

//��pstu��ָ���ѧ����Ϣд���ļ�student.dat��
void WriteToFile(STUINFO *pstu, int num)
{
	FILE *fp;
	fp = fopen("student.dat", "wb");
	if(fp == NULL)
	{
		printf("can't create student.dat\n");
		free(pstu);
		exit(0); 
	}
	
	fwrite(pstu, sizeof(STUINFO), num, fp);
	fclose(fp);
}

//���ļ�student.dat�ж�ȡѧ����Ϣ��pstu��ָ����ڴ����
void ReadFromFile(STUINFO *pstu, int num)
{
	FILE *fp;
	
	fp = fopen("student.dat", "rb");
	if(fp == NULL)
	{
		printf("cann't open student.dat\n");
		free(pstu);
		exit(0);
	}
	
	fread(pstu, sizeof(STUINFO), num, fp);
	fclose(fp);	
} 
