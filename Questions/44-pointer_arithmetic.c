    //Write a program to demonstrate pointer arithmetic.

#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int *pa=a;  // Initialize the pointer to the start of the array
    int length=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<length;i++){
        printf("\nThe value of array in index %d is= %d ",i,*(pa+i)); // Access elements using pointer arithmetic
    }
    for(int i=0;i<length;i++){
        printf("\nThe address of index %d is= %p",i,(pa+i));    // Print memory addresses using the pointer
    }

    pa=a;   // Reset the pointer to the start of the array
    for(int i=0;i<length;i++){
        printf("\nThe values in index %d is= %d", i, *pa);
        pa++;   // Increment the pointer to the next element
    
    }

    return 0;
}


/*

int *pa=a;

a++;    //invalid
pa++;   //valid

*/