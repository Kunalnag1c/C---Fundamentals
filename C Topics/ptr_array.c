#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    printf("Address of a1 is= %d\n", &a[0]);
    printf("Address of a1 is= %d\n", a); // &a[0] == a  -> same work

    printf("Value of a1 is= %d\n", a[0]);
    printf("Value of a1 is= %d\n", *a); // a[0] == *a   -> same work


    // int size = sizeof(a) / sizeof(a[0]); // find total elements of array -> size of full array / size of an element
    // // printf("Size= %d \n", size);

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Address of a1 is= %d\n", &a[i]);
    //     printf("Value of a1 is= %d\n", a[i]);

    //     printf("Address of a1 is= %d\n", (a+i));
    //     printf("Value of a1 is= %d\n", *(a+i));
    // }
    return 0;
}