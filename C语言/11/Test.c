#include <stdio.h>




//����һ�����ڵĽṹ������
struct Date
{
	int year, month, day;
	
};									//�������һ��Ҫ�ǵü��Ϸֺ� 

struct Student_Info
{
	char no[9], name[20], sex;
	unsigned int age, classno;
	float grade;
	struct Date birthday;
		
}; 									//�������һ��Ҫ�ǵü��Ϸֺ� 


typedef int INTEGER;


void main()
{
	//��Ӷ���ṹ������ 
	struct Student_Info stu1, stu2;
	struct Student_Info *pstu;		//ָ����ָ����ڴ浥Ԫ������������Student_Info�ṹ������ 
	
	 


} 
