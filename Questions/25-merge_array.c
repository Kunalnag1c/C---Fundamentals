// Write a program to merge two arrays.

#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("enter the size of array1 = ");
    scanf("%d", &m);
    int a[m];

    printf("\nEnter elements in 1st array=\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("enter the size of array2 = ");
    scanf("%d", &n);
    int b[n];

    printf("\nEnter elements in 2nd array=\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\nThe merged array is=");

    int c[m + n]; // declaring 3rd array

    // assign elements of array1 into array3
    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }

    // assign elements of array12 into array3 after the array1's end index
    for (j = 0; j < n; j++)
    {
        c[i + j] = a[j];
    }

    // printing merged array
    for (i = 0; i < (m + n); i++)
    {
        printf("%d ", c[i]);
    }

    /*The below logic is also right but not suitable for every inputs i.e not have better complexities*/

    // for (int i=0; i < m + n; i++)
    // {
    //     a[m + i] = b[i];        //*******Mering Logic **************************////
    //     printf("%d ", a[i]);
    // }

    return 0;
}