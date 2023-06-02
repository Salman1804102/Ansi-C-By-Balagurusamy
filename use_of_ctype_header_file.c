#include<ctype.h>
#include<stdio.h>
int main()
{
    char ch;
    printf("Press any key\n");
    ch = getchar();
     putchar('\n');
    if(isalpha(ch) > 0)
    {
        printf("The character is a letter\n");
    }
    else if(isdigit(ch) > 0)
    {
        printf("The character is alphanumeric\n");
    }
    else if(isdigit(ch) < 0)
    {
        printf("The character is not alphanumeric\n");
    }
    putchar(ch);
    return 0;
}
