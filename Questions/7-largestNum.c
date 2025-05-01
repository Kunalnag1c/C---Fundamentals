    //Write a program to find the largest of three numbers.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of three number= \n");
    scanf("%d %d %d", &a,&b,&c);

    //check largest number
    if(a>b && a>c){     // && is logical AND operator
        printf("A is largest");
    }
    else if(b>a && b>c){
        printf("B is larger");
    }
    else{
        printf("C is larger");
    }

    return 0;
}