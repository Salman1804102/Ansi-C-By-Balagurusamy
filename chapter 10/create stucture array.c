#include<stdio.h>
#include<string.h>
struct cse18
{
    char name[20];
    int sid;
    double cgpa;
};
void print(struct cse18 student[], int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        printf("Student name: %s\n", student[i].name);
        printf("Student ID: %d\n", student[i].sid);
        printf("Student CGPA: %lf\n", student[i].cgpa);
    }
}
int main()
{
    struct cse18 student[100];
    int n, i;
    printf("Enter the structure size: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%s%d%lf", student[i].name, &student[i].sid, &student[i].cgpa);
        getchar();
    }
    print(student, n);
    return 0;
}
