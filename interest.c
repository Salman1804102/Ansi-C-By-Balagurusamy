#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double amount,total;
    scanf("%lf",&amount);
    for(i = 0; i <= 10; i++){
        if(i == 0){
            printf("%d %.2lf\n", i, amount);
            continue;
        }
        amount = amount+(0.11*amount);
        printf("%d %.2lf\n", i, amount);
    }
    return 0;
}
