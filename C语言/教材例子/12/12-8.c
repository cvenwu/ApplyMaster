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
	
	fp = fopen("student.dat", "wb+");		//以读写方式打开二进制文件
	if (fp == NULL)
	{
		printf("cann't create file: student.dat\n");
		exit(0);
	}
	
	fwrite(stu, sizeof(struct student_info), 3, fp);		//将学生信息写入到文件中
	rewind(fp);												//将文件位置指针置回到文件头
	
	memset(stu, 0, 3*sizeof(struct student_info));			//清除学生信息
	for(i = 0; i < 3; i += 2)								//读第1个和第3个学生的信息到结构数组stu中 
	{
		fseek(&stu[i], i * sizeof(struct student_info), SEEK_SET);	//文件位置指针定位
		fread(&stu[i], sizeof(struct student_info), 1, fp);			//读取一个学生的信息
		printf("%12s%14s%5c%5d%15s\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].age, stu[i].depart); 
	}
	
	fclose(fp);
	
}
