#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct student_info
{
	char no[9];
	char name[10];
	char sex;
	int age;
	char depart[5];
} stu[3] = {
	{"0001", "WangFei", 'M', 18, "Computer"},
	{"0002", "ZhangMin", 'M', 19, "Math"},
	{"0003", "LiYan", 'F', 19, "English"}
};


void main(int argc, char *argv[])
{
	int i;
	FILE *fp;
	
	fp = fopen("student.dat", "wb+");		//�Զ�д��ʽ�򿪶������ļ�
	if (fp == NULL)
	{
		printf("cann't create file: student.dat\n");
		exit(0);
	}
	
	fwrite(stu, sizeof(struct student_info), 3, fp);		//��ѧ����Ϣд�뵽�ļ���
	rewind(fp);												//���ļ�λ��ָ���ûص��ļ�ͷ
	
	memset(stu, 0, 3*sizeof(struct student_info));			//���ѧ����Ϣ
	for(i = 0; i < 3; i += 2)								//����1���͵�3��ѧ������Ϣ���ṹ����stu�� 
	{
		fseek(&stu[i], i * sizeof(struct student_info), SEEK_SET);	//�ļ�λ��ָ�붨λ
		fread(&stu[i], sizeof(struct student_info), 1, fp);			//��ȡһ��ѧ������Ϣ
		printf("%12s%14s%5c%5d%15s\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].age, stu[i].depart); 
	}
	
	fclose(fp);
	
}
