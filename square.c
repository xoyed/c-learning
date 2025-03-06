#include <stdio.h> // Include the standard input/output header file.

int main()
{
    int i, n, sum = 0; 

    printf("enter the number of terms : "); 
    scanf("%d", &n);                        

    printf("\nThe square natural numbers up to %d terms are :", n); 

    for (i = 1; i <= n; i++) 
    {
        printf("%d  ", i * i);
        sum += i * i;          
    }

    printf("\nThe Sum of Square Natural Numbers up to %d terms = %d \n", n, sum); 
    return 0;
}
