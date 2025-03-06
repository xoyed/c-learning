#include <stdio.h>

int main()
{
    int sum = 0;

    // Printing numbers from 1 to 100
    printf("Numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++)
    {
        printf("%d ", i);
        sum += i; // Adding numbers to sum
    }

    // Printing the sum of numbers from 1 to 100
    printf("\nSum of numbers from 1 to 100: %d\n", sum);

    return 0;
}
