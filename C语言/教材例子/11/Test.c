#include <stdio.h>




//定义一个日期的结构体类型
struct Date
{
	int year, month, day;
	
};									//这里最后一定要记得加上分号 

struct Student_Info
{
	char no[9], name[20], sex;
	unsigned int age, classno;
	float grade;
	struct Date birthday;
		
}; 									//这里最后一定要记得加上分号 


typedef int INTEGER;


void main()
{
	//间接定义结构体类型 
	struct Student_Info stu1, stu2;
	struct Student_Info *pstu;		//指针所指向的内存单元的数据类型是Student_Info结构体类型 
	
	 


} 
