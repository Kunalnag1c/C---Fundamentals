// Print the factors of a number.

#include <stdio.h>

int main()
{
    int a;
    printf("Enterr a number to find factors= ");
    scanf("%d", &a);

    // factors
    if (a <= 0)
    {
        printf("Zero Entered !! Try again");
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}