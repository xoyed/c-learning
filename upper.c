#include <stdio.h>
int main()
{

    char upper;
    printf("enter any upper letter:");
    scanf("%c", &upper); // A=65

    printf("the lowercase letter:%c", upper - 32); // a=65
    return 0;
}