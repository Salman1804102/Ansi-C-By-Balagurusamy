#include<stdio.h>
void stat(void);
int main(void)
{
    int i;
    for(i = 1; i <= 3; i++)
        stat();
}
void stat(void)
{
    static int x = 0;
    x = x + 1;
    printf("X = %d\n", x);
}
