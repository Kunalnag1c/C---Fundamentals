#include<stdio.h>

int Fact(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a*Fact(a-1); //factorial by recurssion
}

int main(){
    int a;
    printf("Enter the number for factorial= ");
    scanf("%d", &a);
    
    //function calling
    int fact=Fact(a);
    
    printf("Factorial of %d is= %d", a, fact);
    return 0;
}