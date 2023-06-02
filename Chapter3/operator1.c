#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    x = -14 % 4;
    printf("%d\n", x);
    x = - 14 % - 4;
    printf("%d\n", x);
    x = 14 % - 4;
    printf("%d\n", x);
    return 0;
}
