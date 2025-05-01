#include<stdio.h>

// call by reference sned memory address of the value to the function which affect the original value

void func(int *x)
{
    *x=10;  //change made to actual value

}

int main(){

    int x=5;
    printf("\nX before func call= %d",x);

    func(&x);  //pass address of x

    printf("\nValue after func calling is= %d",x);

     printf("\n\n**The value in Call By Reference changes as it sends the address of the actual value to the formal parameter from actual parameter**\n");

    return 0;
}