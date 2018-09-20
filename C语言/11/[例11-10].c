#include <stdio.h>




/* 
struct Stu_Tea
{
	char name[10];
	int age;
	char job;				//工作s表示学生，t表示教师 
	union {
		int classno;
		char office[10];
	} depart;
	
};

void main()
{
	struct Stu_Tea body[2];
	int i;
	for(i = 0; i < 2; i++)
	{
		printf("input name, age, job, and department\n");
		scanf("%s %d %c", body[i].name, &body[i].age, &body[i].job);
		if(body[i].job == 's')							//是学生，输入班级号 
			scanf("%d", &body[i].depart.classno);	
		else
			scanf("%d", &body[i].depart.office);		//是老师，输入教研室名 
	}	
	
	printf("name\tage job class/office\n");				//显示输入学生的信息、教师信息
	for(i = 0; i < 2; i++)
	{
		if(body[i].job == 's')
			printf("%s\t%3d%3c%d\n", body[i].name, body[i].age, body[i].job, body[i].depart.classno);
		else
			printf("%s\t%3d%3c%d\n", body[i].name, body[i].age, body[i].job, body[i].depart.office);

	 } 
	
	
 } */ 
