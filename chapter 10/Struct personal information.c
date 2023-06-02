#include<stdio.h>
#include<string.h>
struct personal
{
    char name[20];
    int  day;
    char month[20];
    int year;
    float salary;
};
int main(void)
{
    struct personal person1;
    scanf("%[^\n]%d %[^\n]%d%f",
          &person1.name,
          &person1.day,
          &person1.month,
          &person1.year,
          &person1.salary
         );
    printf("%s\n%d\n%s\n%d\n%f\n",
           person1.name,
           person1.day,
           person1.month,
           person1.year,
           person1.salary
          );
          return 0;
}
