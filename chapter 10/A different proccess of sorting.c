#include<stdio.h>
#include<string.h>
struct BHS15
{
    char name[100];
    int roll;
    double gpa;
};
void input(struct BHS15 student[], int n)
{
    int i;
    printf("******************INPUT******************\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s%d%lf", student[i].name, &student[i].roll, &student[i].gpa);
    }
}
void output(struct BHS15 student[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Name: %s\n", student[i].name);
        printf("Roll: %d\n", student[i].roll);
        printf("GPA: %lf\n\n", student[i].gpa);
    }
}
void rollsort(struct BHS15 student[], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            struct BHS15 temp;
            if(student[i]. roll > student[j].roll)
            {
                temp.roll = student[i].roll;
                strcpy(temp.name, student[i].name);
                temp.gpa = student[i].gpa;

                student[i].roll = student[j].roll;
                strcpy(student[i].name, student[j].name);
                student[i].gpa = student[j].gpa;

                student[j].roll = temp.roll;
                strcpy(student[j].name, temp.name);
                student[j].gpa = temp.gpa;

            }
            if(student[i].roll == student[i].roll)
            {
                if(strcmp(student[i]. name, student[j].name) == 1)
                {
                    strcpy(temp.name, student[i].name);
                    temp.roll = student[i].roll;
                    temp.gpa = student[i].gpa;

                    strcpy(student[i].name, student[j].name);
                    student[i].roll = student[j].roll;
                    student[i].gpa = student[j].gpa;

                    strcpy(student[j].name, temp.name);
                    student[j].roll = temp.roll;
                    student[j].gpa = temp.gpa;

                }
            }
        }
    }
}
int main(void)
{
    struct BHS15 student[100];
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    input(student, n);
    rollsort(student, n);
    printf("\n");
    output(student, n);
    return 0;
}

