#include<stdio.h>
struct complex
{
    double real;
    double img;
};
struct complex add (struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return(c3);
};
struct complex product(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.real * c2.img + c1.img * c2.real;
    return(c3);
};
int main(void)
{
    struct complex c1, c2, sum, mul;
    c1.real = 2;
    c1.img = 3;
    c2.real = 2;
    c2.img = -3;
    sum = add(c1, c2);
    mul   = product(c1, c2);
    printf("%lf\n%lf\n", sum.real, sum.img);
    printf("%lf\n%lf\n", mul.real, mul.img);
    return 0;
}
