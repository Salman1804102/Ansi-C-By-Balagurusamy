#include<stdio.h>
#include<math.h>
struct
{
    char title[25];
    char author[25];
    int pages;
    float prices;
} book1, book2, book3;
//structure variable can be declared as mentioned above
//Be careful of the semicolon
// no need of structure tag name
int main(void)
{
    book1.pages= 500;
    printf("%d", book1.pages);
    return 0;
}
