#include<stdio.h>
void mathoperation(int a, int b, int *p, int *q)
{
    *p = a + b;
    *q = a - b;
}
int main(void)
{
    int a, b, x, y;
    scanf("%d%d", &a, &b);
    mathoperation(a, b, &x, &y);
    printf("Summation a + b = %d\nSubtraction between a + b = %d\n", x, y);
    return 0;
}
