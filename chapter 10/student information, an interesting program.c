#include<stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main(void)
{
    int i;
    struct marks student[3] = {{45, 67, 81,0},
                                                                {75, 53, 69, 0},
                                                                {57, 36, 71}};
    struct marks total={0, 0, 0, 0};
    for(i = 0; i <= 2; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
        total.sub1 +=  student[i].sub1;
        total.sub2 +=  student[i].sub2;
        total.sub3 +=  student[i].sub3;
        total.total += student[i].total;
    }
    printf("Student\t\tTotal\n\n");
    for(i = 0; i <= 2; i++)
        printf("Student[%d]\t%d\n", i+1, student[i].total);
    printf("\nSubject\t\ttotal\n\n");
    printf("%s\t%d\n%s\t%d\n%s\t%d\n",
           "Subject 1", total.sub1,
           "Subject 2", total.sub2,
           "Subject 3", total.sub3);
    printf("\nGrand Total = %d\n", total.total);
    return 0;
}
