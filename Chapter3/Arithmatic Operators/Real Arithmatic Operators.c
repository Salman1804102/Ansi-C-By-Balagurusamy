#include<stdio.h>
int main()
{
    ///Mixed-Mode Operators
    printf("%lf\n", 15/10.0);
    printf("%d\n", 15/10.0);//as this expression can gives us a real value, but we use %d here, so the result will be 0.0
    return 0;
}
