//how to get the address of variables
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x;
    char a ;
    float p, q;
    x = 125;
    a = 'A';
    p = 10.25;
    q = 18.75;
    printf("%c is stored at address %u\n", a, &a);
    printf("%d is stored at address %u\n", x, &x);
    printf("%f is stored at address %u\n", p, &p);
    printf("%f is stored at address %u\n", q, &a);
    return 0;
}
