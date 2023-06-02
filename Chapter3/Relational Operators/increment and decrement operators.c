#include<stdio.h>
int main(void)
{
    int a, b , c;
    a = b = 6;
    c =  a++ - b;
    printf("c is %d\n", c);
    printf("a is %d\n\n", a);
    a = b = 6;
    c = ++a - b;
    printf("c is %d\n", c);
    printf("a is %d\n\n", a);
    a = b =6;
    a = b++;
    printf("%d\n", a);
    a = b = 6;
    a = ++b;
    printf("%d\n\n", a);

    a = b = 6;
    c = ++a - b--;
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n\n", b);

    a = b = 6;
    c = ++a - --b;
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n\n", b); //++a is higher precedence than --a;
    a = b = 6;
    c = ++a - b--;
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n\n", b);
    a = b = 6;
    c = ++a - ++b;
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n\n", b);
}
