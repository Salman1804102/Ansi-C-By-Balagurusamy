#include<stdio.h>
#include<math.h>
enum days_of_week
{
    Sun, Mon, Tue, Wed, Thu, Fri, Sat
};
int main()
{
    enum days_of_week day1, day2;
    day1 = Sun;
    day2 = Mon;
    printf("%d\n", day1);
    printf("%d\n", day1 - day2);
    return 0;
}
