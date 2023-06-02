#include<stdio.h>
struct st_record
{
    int weight;
    float height;
} student1= {60, 180.26};//initialization can also take place here
int main(void)
{
    struct st_record student2 = {53, 170.60};
    struct st_record student3 = {70};//partial initialization are also allowed, rest of uninitialized variables will be assigned to the value zero for int, float and double data type and \0 for string or character variables
    printf("%d\n%f\n", student2.weight, student2.height);
    printf("%d\n%f\n", student1.weight, student1.height);
    printf("%d\n%f\n", student3.weight, student3.height);
    return 0;
}
