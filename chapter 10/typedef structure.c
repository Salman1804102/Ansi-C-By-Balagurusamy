#include<string.h>
#include<stdio.h>
typedef struct
{
    char title[20];
    char author[20];
    int pages;
    double price;
} Books;
int main(void)
{
    Books b1;
    strcpy(b1.author, "Humayun Ahmmed");
    b1.pages = 50;
    printf("Author: %s\nPages: %d\n", b1.author, b1.pages);
    return 0;
}
