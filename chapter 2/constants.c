#include<stdio.h>
int main()
{
    printf("Integer values\n\n");
    printf("%d %d %d\n", 2147483647, 2147483647+1, 2147483647+10);
    printf("\n");
    printf("Long Integer values\n\n");
    printf("%lld %lld %lld \n",2147483647LL, 2147483647LL+1LL, 2147483647LL+10LL);
    printf("%u %u %u \n",2147483647U, 2147483647U+1U, 2147483647U+10U);
    printf("%llu %llu %llu \n",2147483647ULL, 2147483647ULL+1ULL, 2147483647ULL+10ULL);
    return 0;
}
