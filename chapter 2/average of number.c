#include<stdio.h>
#define N 10
int main()
{
    int i, count = 0;
    double  sum = 0, num, avg;
    while(count< N)
    {
        scanf("%lf", &num);
        sum = sum + num;
        count++;
    }
    printf("Average: %.3lf\n", sum/(double)count);
    return 0;
}
