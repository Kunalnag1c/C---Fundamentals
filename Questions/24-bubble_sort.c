// Sort an array (Bubble Sort).

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the size of array= ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements in array= \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // original array
    printf("Oiginal array is= ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    // sorted arrray logic
    printf("\nSorted array is= ");

    for (i = 0; i < n - 1; i++)
    {
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // printing sorted array
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
