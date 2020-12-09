#include <stdio.h>

int main()
{
    unsigned int age;
    unsigned int SECOND_PER_YEAR = 31560000;
    printf("Please input Your age:");
    scanf("%d",&age);
    printf("age should have %u second",age * SECOND_PER_YEAR);
    return 0;
}
