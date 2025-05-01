    //Swap two numbers using a temporary variable.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a and b= \n");
    scanf("%d %d", &a, &b);

    //swapping using third variable
    c=a;
    a=b;
    b=c;
    printf("After swapping the value of a and b is = %d and %d ", a,b);


    return 0;
}