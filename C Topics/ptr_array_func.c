#include<stdio.h>

int arrayFun(int a[],int size){

    // printf("Address of a1 is= %d\n", &a[0]);
    // printf("Address of a1 is= %d\n", a); // &a[0] == a  -> same work

    // printf("Value of a1 is= %d\n", a[0]);
    // printf("Value of a1 is= %d\n", *a); // a[0] == *a   -> same work
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        // sum += a[i];
        sum += *(a+i);  // a[i] == *(a+i)  -> same work
    }
    return sum;
}

int main(){
    int a[]={1,2,3,4,5};

    int size=sizeof(a)/sizeof(a[0]);
    
    int sum = arrayFun(a,size);
    
    printf("Sum of all elements are= %d", sum);

    return 0;
}