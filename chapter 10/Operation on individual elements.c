#include<stdio.h>
typedef struct
{
    int roll;
    char name[20];
    double marks;
} Student;
int main(void)
{
    Student s1;
    s1.roll = 102;
    s1.marks = 75.0;
    if(s1.roll == 102)
        s1.marks += 10;
    printf("Roll: %d and Marks: %lf\n", s1.roll, s1.marks);
    s1.roll++;
    s1.marks = 80.0;
    printf("Roll: %d and Marks: %lf\n", s1.roll, s1.marks);
    return 0;
}
