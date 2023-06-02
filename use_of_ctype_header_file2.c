#include<ctype.h>
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet\n");
    putchar('\n');
    ch = getchar();
    if(islower(ch) > 0)
        putchar(toupper(ch));//Reverse and display
    else
        putchar (tolower(ch));
    return 0;;
}
