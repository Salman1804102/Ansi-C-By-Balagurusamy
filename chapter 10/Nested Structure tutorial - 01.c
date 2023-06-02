#include<stdio.h>
struct salary
{
    char name;
    char departement;
    struct
    {
        int dearness;
        int house_rent;
        int city;
    } allowence, arrears;
} employee[100];
int main(void)
{
    employee[0].allowence.dearness = 3000;
    printf("%d\n",  employee[0].allowence.dearness);
    employee[1].arrears.house_rent = 5000;
    printf("%d\n", employee[0].arrears.house_rent);
    return 0;
}
