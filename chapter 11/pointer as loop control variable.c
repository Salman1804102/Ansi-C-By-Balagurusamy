#include<stdio.h>
#include<math.h>
int main(void)
{
    int i, *p, sum = 0;
    int a[5] = {5, 4, 2, 1, 3};
    p = a;
    while(p <= &a[4])
    {
        printf("%d %u\n", i, *p, p);
        sum = sum + *p;
        p++;
    }
    printf("Sum = %d\n", sum);
    printf("&a[0] = %d\n", &a[0]);
    printf("p = %d\n", p);
    return 0;
}
