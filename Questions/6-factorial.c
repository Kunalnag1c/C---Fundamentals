// Calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int a, fact = 1;
    printf("Enter the number for factorial= ");
    scanf("%d", &a);

//factorial
    if (a < 0)
    {
        printf("Not defined");
    }
    else
    {
        for (int i = a; i >= 1; i--)
        {
            fact *= i;
        }
        printf("Factorial of given number is= %d", fact);
    }

    return 0;
}