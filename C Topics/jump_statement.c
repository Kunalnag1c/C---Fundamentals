#include<stdio.h>

int main()
{
    int i;

    // Using break in a loop
    printf("Using break:\n");
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break; // Exit the loop when i is 3
        }
        printf("%d ", i);
    }
    printf("\n");

    // Using continue in a loop
    printf("Using continue:\n");
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // Skip the rest of the loop body when i is 3
            printf("Kunal");
        }
        printf("%d ", i);
    }
    printf("\n");

    // Using goto to jump to a labeled statement
    printf("Using goto:\n");
    i = 1;
label:
    if (i <= 3)
    {
        printf("%d ", i);
        i++;
        goto label; // Jump to the labeled statement
    }
    printf("\n");

    // Using return to exit the function
    printf("Using return:\n");
    for (i = 1; i <= 3; i++)
    {
        if (i == 2)
        {
            printf("Exiting the function.\n");
            return 0; // Exit the function early
        }
        printf("%d\t ", i);
    }

    // This code will never execute because of the return above
    printf("This will not be printed.\n");

    return 0;
}
