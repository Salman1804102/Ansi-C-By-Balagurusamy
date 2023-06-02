#include<stdio.h>
#include<string.h>
typedef struct
{
    int x;
    int y;
} VECTOR;
VECTOR v, *ptr = &v;
int main(void)
{
    VECTOR strct_var;
    v.x = 2;
    printf("%d\n", v.x);
    (*ptr).x = 3;//concept of indirection operator is used
    printf("%d\n", (*ptr).x);
    ptr->y = 50;
    printf("%d\n", ptr->x);
    return 0;
}
