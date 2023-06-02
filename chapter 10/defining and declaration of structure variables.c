#include<stdio.h>
#include<string.h>
struct book_bank
{
    char title[25];
    char author[25];
    int pages;
    float prices;
};

int main(void)
{
    struct book_bank book1, book2, book3;
    book1.pages= 500;
    strcpy(book1.author, "Salman");
    printf("%s\n", book1.author);
    printf("%d", book1.pages);
    return 0;
}
