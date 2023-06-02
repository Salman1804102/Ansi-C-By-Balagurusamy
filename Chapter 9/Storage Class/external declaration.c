#include<stdio.h>
void fun1(void);
int main(void)
{
    extern int y;
    printf("%d\n", y);
    fun1();
}
fun1(void)
{
    extern int y;
    y = 5;
    printf("%d\n", y);
}
int y;
