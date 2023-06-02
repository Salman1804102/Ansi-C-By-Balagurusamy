#include<stdio.h>
int main()
{
    int  days, years, months;

    scanf("%d", &days);

    printf("Years: %d\n", days / 365);

    months = days % 365;

    printf("Months: %d\n", months / 30);

    days = months % 30;

    printf("Days: %d\n", days);
    return 0;
}
