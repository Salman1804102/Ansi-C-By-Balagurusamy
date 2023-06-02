#include<stdio.h>
int main()
{
    printf("%d\n", 050);
    printf("%o\n", 40);
    printf("%o\n", 050);
    printf("%#o\n", 050);
    /**The format characters %#o do cause a leading zero
to be displayed before an octal value.**/

    printf("\n\n%x\n", 0xFFFDD);
    printf("%x\n", 0XFFFDD);
    printf("%x\n", 0Xfffdd);
    printf("%#x\n", 0Xfffdd);
    printf("%d\n\n", 0xFFFDD);

    printf("%e\n", 0.00072);
    printf("%lf\n", 0.00072);
    printf("%g\n", 0.00072);
    printf("%lf\n", 72e-4);




    return 0;
}
