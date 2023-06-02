#include<stdio.h>
#define SIZE 100
int main(void)
{
    int i;
    void print_out(void);
    extern float height[];
    print_out();
}
void print_out(void)
{
    extern float height[];
    int i;
}
float height[SIZE];
