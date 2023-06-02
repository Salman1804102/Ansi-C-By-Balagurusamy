#include<stdio.h>
int main(void)
{
    int x = 10, *p1, **p2;
    p1 = &x;
    p2 = &p1;
    printf("%d", **p2);
    return 0;
}
