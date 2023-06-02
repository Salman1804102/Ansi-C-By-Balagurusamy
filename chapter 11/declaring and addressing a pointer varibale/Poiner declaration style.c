#include<stdio.h>
int main(void)
{
    int* p;
    int x = 1;
    int *q;
    int y = 2;
    int * r;
    int z = 3;
    p = &x, q = &y, r = &z;
    printf("%d %d %d\n", p, q, r);
    return 0;
}
