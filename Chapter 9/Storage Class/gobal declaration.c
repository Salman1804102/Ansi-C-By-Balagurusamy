#include<stdio.h>
func1(void);
int main(void)
{
    y = 5;
    printf("Global variable y is declared before main, so the problem will arise\n");
    printf("Compiler will issue an error message\n");
    printf("%d\n", func1());
}
int y;
func1(void)
{
    y = y + 1;
    return y;
}
