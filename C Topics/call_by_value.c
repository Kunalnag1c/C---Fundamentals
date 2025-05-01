#include<stdio.h>

//call by value sends the copy of value to function which does not affect the original value

void func(int x)   // here x is formal parameter
{
    x=10; // local variable
    printf("\nX under func= %d",x);
}

int main(){
    
    int x=5;  //actual parameter
    printf("\nX under main= %d",x);

    func(x);

    printf("\nX after function calling= %d",x);
    printf("\n\n**The value in Call By Value remain unchange as it sends on copy on the formal parameter from actual parameter**\n");



    return 0;
}