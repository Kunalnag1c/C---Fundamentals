    //Check if a number is odd or even.

#include<stdio.h>

int main(){
    int x;
    printf("Enter the value of a= \n");
    scanf("%d",&x);

    //checking even odd
    if(x%2==0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given value is odd");
    }

    return 0;
}