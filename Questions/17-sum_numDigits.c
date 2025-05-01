    //Find the sum of the digits of a number.

#include<stdio.h>

int main(){
    int a,sum=0;;
    printf("Enter the number:");
    scanf("%d",&a);

    while(a!=0){
        int x=a%10;     //take last digit // remainder
        sum+=x;         //add the remainder iteratively one by one 
        a=a/10;         //remove the last digit from a
    }
    printf("Sum of digits is= %d",sum );

    return 0;
}