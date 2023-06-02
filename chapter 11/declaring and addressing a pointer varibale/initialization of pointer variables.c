#include<stdio.h>
int main(void)
{
    int x = 1, *p = &x;//declaration of data variable, initialization and declaration of pointer variable took place in one statement
    printf("%d is the address of %d\n", p, *p);
    return 0;
}
