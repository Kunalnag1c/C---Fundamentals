#include<stdio.h>

typedef int integer;

int main(){
    integer a=10;   //new name or alias
    int b=20;       //existing predefined variable
    printf("a=%d \nb=%d",a,b);
    
    return 0;
}


/*
typedef is used to give a new name to an existing variable
we can now further use this name in place of that old name(existing variable)
also both can be used in the program their is no issue
*/