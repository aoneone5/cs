#include <stdio.h>

/* Program to print fibonacci series till a user given limit */

void main() {
    int first = 0, second = 1, third, i, limit;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("%d\n%d\n", first, second);

    for (i = 3; i <= limit; i++)
    {
        third = first + second;
        printf("%d\n", third);

        first = second;
        second = third;
    }
    
}