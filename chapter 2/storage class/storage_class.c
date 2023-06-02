#include<stdio.h>
#define MAX 3.1416
int main()
{
    auto int count;
    register char ch;
    static int a;
    extern long total;
    volatile int date = 0;
    printf("%d %d %d\n\n", count, a, date);

    int p, q, s;
    double x, y, z;
    p = q = s = 0;
    x = y = z = MAX;
    //more than one assignment statement can be added
    printf("%d\n%lf\n", p, MAX);
    y = 1.234567880630;
    //normally shows 6 digits after decimal places but using 0.12 we get the whole
    printf("%.12lf\n",y);
    return 0;
}
