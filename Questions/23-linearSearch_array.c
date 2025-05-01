// Search for an element in an array (Linear Search).

#include <stdio.h>

int main()
{
    int n, a[20];
    int find, temp;
    printf("Enter the size of array= ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to find= ");
    scanf("%d", &find);
    for (int i = 0; i < n; i++)
    {

        if (a[i] == find)
        {
            // printf("Element find in %d location", i+1);
            temp = i + 1;
        }
    }

    if (temp != 0)
    {
        printf("Element find in %d location", temp);
    }
    else
    {
        printf("Not found");
    }

    return 0;
}