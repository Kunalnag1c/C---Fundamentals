#include <stdio.h>

void array(int n)
{
    int a[10];
    printf("Enter the %d elements in array=", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Your array is= ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("Your reverse array is= ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}

int main()
{

    int n;
    printf("Enter the size of array you want to print: ");
    scanf("%d", &n);

    array(n);

    return 0;
}