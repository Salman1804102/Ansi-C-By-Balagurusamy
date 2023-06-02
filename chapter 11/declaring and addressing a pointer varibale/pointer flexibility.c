#include<stdio.h>
int main(void)
{
    int x = 1, y = 10, *p1 = &x , *p2 = &x , *p3 = &x, *temp;
    printf("%d is the address of %d\n", p1, *p1);
    printf("%d is the address of %d\n", p2, *p2);
    printf("%d is the address of %d\n", p3, *p3);
    printf("%d is the address of %d\n", &y, *&y);
    return 0;
}
