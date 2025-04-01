#include <stdio.h>

int main(){
    int i, sum = 0;

    printf("The first 100 natural number :\n");
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }

    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
