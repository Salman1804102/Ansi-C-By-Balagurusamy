#include<stdio.h>
int main()
{
    int a, b, c, tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        int x =  (a > b) ? ((a > c) ? a : c) : (b > c) ? b : c ;

        if(x == a)
        {
            int y = (c > b) ? c : b;
            if(y == c)
                printf("Case %d: %d %d %d\n", i, b, c, a);
            else if(y == b)
                printf("Case %d: %d %d %d\n", i, c, b, a);
        }

       else if(x == b)
        {
            int y = (c > a) ? c : a;

            if(y == c)
                printf("Case %d: %d %d %d\n", i, a, c, b);
            else if(y == a)
                printf("Case %d: %d %d %d\n", i, c, a, b);
        }

        else if(x == c)
        {
            int y = (b > a) ? b : a;
            if(y == b)
                printf("Case %d: %d %d %d\n", i, a, b, c);
            else if(y == a)
                printf("Case %d: %d %d %d\n", i,b, a, c);
        }
    }
    return 0;
}
