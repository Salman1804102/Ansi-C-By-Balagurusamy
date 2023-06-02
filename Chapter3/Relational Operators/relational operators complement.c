#include<stdio.h>
int main()
{
    int x = 5, y = 6;
    printf("%d\n", !(x < y)); printf("%d\n\n", x>= y);
    printf("%d\n", !(x > y)); printf("%d\n\n", x<= y);
    printf("%d\n", !(x == y)); printf("%d\n\n", x != y);
    printf("%d\n", !(x != y)); printf("%d\n\n", x== y);
    printf("%d\n", !(x <= y)); printf("%d\n\n", x > y);
    printf("%d\n", !(x >= y)); printf("%d\n\n", x < y);
    return 0;
}
