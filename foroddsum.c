#include <stdio.h>
int main() {
    int i, sum = 0;
    printf("odd numbers from 1 to 100:\n");
    
    for (i = 1; i<= 100; i++) {
        if (i% 2 != 0) {  
            printf("%d ", i);
            sum +=i;
        }
    }
    printf("\nSum of odd numbers: %d\n", sum);
    return 0;
}