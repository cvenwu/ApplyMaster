#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct student_info
{    
   char no[9];
   char name[10];
   char sex;
   int  age;
   char address[20];
};
typedef struct student_info STUINFO;

void WriteToFile (STUINFO *pstu, int num);
void ReadFromFile (STUINFO *pstu, int num);

void main( )
{
    int i, num;
    STUINFO *pstu;
    //输入学生人数
    printf ("input the number of students: ");  
    scanf ("%d", &num);
    fflush (stdin);
    //动态分配内存
    pstu = (STUINFO *) malloc (num * sizeof(STUINFO));  
    if (pstu == NULL)   //内存分配失败
    {
      printf ("not enough memory\n");
      return;
    }
    for (i = 0; i < num; i++)   //输入学生信息
    {
      printf ("the %dth student: no = ", i+1);
      gets (pstu[i].no);
      fflush (stdin);
      printf ("the %dth student: name = ", i+1);
      gets (pstu[i].name);
      fflush (stdin);
      printf ("the %dth student: sex = ", i+1);
      scanf ("%c",&pstu[i].sex);
      fflush (stdin);
      printf ("the %dth student: age = ", i+1);
      scanf ("%d", &pstu[i].age);
      fflush (stdin);
      printf ("the %dth student: address = ", i+1);
      gets (pstu[i].address);
      fflush (stdin);
    }
    //将pstu所指向的学生信息写入文件中
    WriteToFile (pstu, num); 
    //将pstu所指向的内存块清0    
    memset (pstu, 0, num * sizeof(STUINFO)); 
    //从文件中读取学生信息到pstu所指向的内存块中
    ReadFromFile (pstu, num);    
    //显示学生信息
    printf ("%10s%12s%6s%5s%20s\n","no","name",
                "sex","age","address");
    for (i = 0; i < num; i++)
      printf ("%10s%12s%6c%5d%20s\n", pstu[i].no, pstu[i].name,
                        pstu[i].sex, pstu[i].age, pstu[i].address);
    free (pstu);  //释放动态分配的内存
  }

//将pstu所指向的学生信息写入文件student.dat中
void WriteToFile (STUINFO *pstu, int num)
{
    FILE *fp;
    fp = fopen ("student.dat", "wb");
    if (fp == NULL)
    {
      printf ("can't create student.dat\n");
      free (pstu);
      exit (0);
    }
    fwrite (pstu, sizeof(STUINFO), num, fp);
    fclose (fp);
}

//从文件student.dat中读取学生信息
//到pstu所指向的内存块中
void ReadFromFile (STUINFO *pstu, int num)
{
    FILE *fp;
    fp = fopen ("student.dat", "rb");
    if (fp == NULL)
    {
      printf ("can't open student.dat\n");
      free (pstu);
      exit (0);
    }
    fread (pstu, sizeof(STUINFO), num, fp);
    fclose (fp);
}

