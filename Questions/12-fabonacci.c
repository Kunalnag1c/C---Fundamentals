// Print the Fibonacci series up to n terms.

#include <stdio.h>

int main()
{
    // int n, fab = 0, a[20];
    // printf("Enter the value of n: ");
    // scanf("%d", &n);

    // printf("fabonacci series is=");

    // for (int i = 0; i >= n; i++)
    // {
    //     if (i == 0 || i == 1)
    //     {
    //         printf("%d", i);
    //     }
    //     else
    //     {
    //         fab = a[i - 2] + a[i - 1];
    //         printf("%d ", fab);
    //     }
    // }

    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle the case where n is less than 1
    if (n <= 0)
    {
        printf("Please enter a positive number greater than 0.");
    }
    else
    {
        printf("Fibonacci Series up to %d terms: \n", n);

        // Print the first term (if n >= 1)
        if (n >= 1)
        {
            printf("%d ", first);
        }

        // Print the second term (if n >= 2)
        if (n >= 2)
        {
            printf("%d ", second);
        }

        // Generate the rest of the Fibonacci series
        for (int i = 3; i <= n; i++)
        {
            next = first + second; // next term is the sum of the previous two
            printf("%d ", next);   // print the next term

            // Update the values of first and second
            first = second;
            second = next;
        }
    }

    return 0;
}