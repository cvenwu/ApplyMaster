#include <stdio.h>




/* 
struct Stu_Tea
{
	char name[10];
	int age;
	char job;				//����s��ʾѧ����t��ʾ��ʦ 
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
		if(body[i].job == 's')							//��ѧ��������༶�� 
			scanf("%d", &body[i].depart.classno);	
		else
			scanf("%d", &body[i].depart.office);		//����ʦ������������� 
	}	
	
	printf("name\tage job class/office\n");				//��ʾ����ѧ������Ϣ����ʦ��Ϣ
	for(i = 0; i < 2; i++)
	{
		if(body[i].job == 's')
			printf("%s\t%3d%3c%d\n", body[i].name, body[i].age, body[i].job, body[i].depart.classno);
		else
			printf("%s\t%3d%3c%d\n", body[i].name, body[i].age, body[i].job, body[i].depart.office);

	 } 
	
	
 } */ 
