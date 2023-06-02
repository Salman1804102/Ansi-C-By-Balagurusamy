#include<stdio.h>
struct pay
{
    int dearness;
    int house_rent;
    int city;
};

struct salary
{
    char name;
    char departement;
    struct pay allowance;
    struct pay arrears;
};

struct salary employee[100];

int main(void)
{
    employee[0].allowance.dearness = 3000;
    printf("%d\n",  employee[0].allowance.dearness);
    employee[1].arrears.house_rent = 5000;
    printf("%d\n", employee[0].arrears.house_rent);
    return 0;
}
