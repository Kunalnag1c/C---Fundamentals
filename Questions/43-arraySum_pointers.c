    // Find the sum of array elements using pointers.

#include<stdio.h>

int sum(int *pa, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+(*(pa+i));
    }
   

    return sum;
}

int main(){
    int n;
    printf("Enter the size of array= ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array=\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    //  // Initialize the pointer to the start of the array
    // ptr = arr;

    // // Calculate the sum of elements using the pointer
    // for (i = 0; i < n; i++) {
    //     sum += *ptr;  // Dereference the pointer to access the array element
    //     ptr++;        // Move the pointer to the next element
    // }

    // // Print the result
    // printf("The sum of the array elements is: %d\n", sum);

    
    int result= sum(a, n);

     printf("The sum of elements is= %d", result);

    return 0;
}



