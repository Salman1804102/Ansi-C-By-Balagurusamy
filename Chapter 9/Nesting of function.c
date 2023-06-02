#include<stdio.h>
int diff(int m, int n)
{
    if(m != n)
        return 1;
    else
        return 0;
}
float ratio(int x, int y)
{
    if( diff(x, y) )
        return (x /( x- y));
    else
        return 0.0;
}
int main(void)
{
    int a, b;
    float c;
    scanf("%d%d", &a, &b);
    c = ratio(a, b);
    if(c != 0.0)
        printf("%.2lf", c);
    else
        printf("Division is not possible\n");
    return 0;
}
