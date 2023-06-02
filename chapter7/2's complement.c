#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
    int i, j ;
    char binary[1000];
    gets(binary);
    for(i = 0; i < strlen(binary) ; i++)
    {
        if(binary[i] != '0' && binary[i] != '1'){ printf("Incorrect binary format\n");
        getch();
        exit(0);
        }
    }
    for(i = strlen(binary) - 1; binary[i] == '0' ; i--);
    for(j = i - 1; j >= 0; j--)
    {
        if(binary[j] == '1') binary[j] = '0';
        else binary[j] = '1';
    }
    printf("%s\n", binary);
    getch();
}
