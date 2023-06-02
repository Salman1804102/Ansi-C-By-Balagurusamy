#include<stdio.h>
struct classes
{
    char name[20];
    int roll;
    double marks;
};
int main(void)
{
    int x;
    struct classes std3;
    struct classes std1 = {"Salman", 102, 60};
    struct classes std2 = {"Rimu", 01, 90};
    std3 = std2;
    printf("%s\n%d\n%lf\n", std3.name, std3.roll, std3.marks);
    x = ((std3.roll == std2.roll) && (std3.marks == std2.marks) && (strcmp(std2.name, std3.name) == 0)) ? 1 : 0;
    if(x) printf("This two structure are same\n");
    else printf("They are not same\n");
    return 0;
}
