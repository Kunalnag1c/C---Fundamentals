// Write a function to check if a number is prime.

#include <stdio.h>

int prime(int a)
{
    if (a <= 1)
    {
        return 0;
    }

    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int a;
    printf("Enter a number to check prime= ");
    scanf("%d", &a);

    if (prime(a))
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }

    return 0;
}