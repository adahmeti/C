#include <stdio.h>

int isPerfect(int n);

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Enter a positive integer.\n");
        return 1;
    }

    if (isPerfect(n))
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}

// Function to check if a number is perfect
int isPerfect(int n)
{
    int i, sum = 0;

    // Loop to find the sum of proper divisors of n
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;

    // Check if the sum of proper divisors is equal to n
    if (sum == n)
        return 1;
    else
        return 0;
}
