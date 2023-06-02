#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n == 1) return 1;
    else
        fact = n * factorial(n - 1);
    return fact;
}
int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", factorial(x));
    return 0;
}
