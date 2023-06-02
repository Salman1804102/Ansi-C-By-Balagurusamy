#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = (a > b) ? ((a > c) ? a : c) : (b > c) ? b : c;
    printf("The maximum value is %d\n", x);
    x = (a > b && a > c) ? a : ( (b > a && b > c) ? b : c) ;
    printf("The maximum value is %d\n", x);
    x = (a < b) ? ((a < c) ? a : c) : (b < c) ? b : c;
    printf("The minimum value is %d\n", x);
    x = (a < b && a < c) ? a : ( (b < c && b < c) ? b : c );
    printf("The minimum value is %d\n", x);
    return 0;
}
