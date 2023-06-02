#include<stdio.h>
#define N 100
#define A 2
int main(void)
{
    int a;
    a = A;
    while(a < 100)
    {
        printf("%d\n", a);
        a *= a;
    }

    int x = 10, y = 5;

    printf("\n%d\n", x += y +1);
    printf("%d\n", x *= y +1);
}
