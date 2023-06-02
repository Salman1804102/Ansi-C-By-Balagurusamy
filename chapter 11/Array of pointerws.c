#include<stdio.h>
int main(void)
{
    char *name[3] = {
        "Bangladesh",
        "India",
        "Pakistan"
    };
    for(int i = 0; i < 3; i++)
        printf("%s\n", name[i]);
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        int j = 0;
        while(*(name[i] + j) != '\0')
        {
            printf("%c", *(name[i] + j));
            j++;
        }
        puts("");
    }
    return 0;
}
