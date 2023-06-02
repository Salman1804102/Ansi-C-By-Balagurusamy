#include<stdio.h>
int main()
{
    int a = 16, b = 9, c = 3;
    int x = a - b / 3 + c * 2 - 1;
    printf("%d\n", x);
    x = a - b / (3 + c) * (2 - 1);//parenthesis are in higher precedence
    printf("%d\n", x);
     x = a - (b / (3 + c) * 2 )- 1;
     printf("%d\n", x);
    return 0;
}
