    //Reverse the elements of an array.

#include <stdio.h>

int main()
{
    int n, a[20];
    printf("enter the amount of number you want= \n");
    scanf("%d", &n);
    printf("The numbers are= \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The reverse number are= ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}