#include <stdio.h>

int main()
{
    int a, n, fact = 1;
    loop:

    printf("Enter a number for factorial=");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("The factorial of is not valid .. try another number below->\n");
        goto loop;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Woww..Factorial is= %d", fact);
    }

    
    return 0;
}