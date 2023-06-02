#include<stdio.h>
int main(void)
{
    int *p, q;
    p = &q;
    q = 1;
    printf("%p", p);
    *p++;
    printf("\n%d\n%p\n%d", q, p, *p);
    return 0;
}
