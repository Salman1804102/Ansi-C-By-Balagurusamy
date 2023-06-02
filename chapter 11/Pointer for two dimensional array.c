#include<stdio.h>
int main(void)
{
    int a[3][4] = {{15, 27, 11, 35}, {22, 19, 31, 17}, {31, 23, 14, 36}};
    int *p, i, j;
    p = a;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("p = %u\n", p);
            printf("p+%d = %u\n", i, p + i);
            printf("*(p+%d) = %d\n", i, *(p + i));
            printf("*(p + i) + j = %d\n", *(p + i) + j);
            //printf("*(*(p + i) + j = %d\n\n\n", *(*(p+i) + j) );
        }
    }
    return 0;
}
