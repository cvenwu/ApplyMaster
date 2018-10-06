#include <stdio.h>

typedef struct student {
    char name[20];
    char stuNo[11];
    int age;
    struct student *next;
}Student;


int main(int argc, char const *argv[])
{
    Student stu1, stu2;
    stu1.next = &stu2;
    stu2.age = 13;
    printf("The age of stu2 is %d\n", stu2.age);




    return 0;
}
