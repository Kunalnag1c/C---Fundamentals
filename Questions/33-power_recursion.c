        //Implement a function to find the power of a number (using recursion).

#include<stdio.h>

int Power(int a, int n){
    if (n==0){
        return 1;
    }
    else{
        return a*Power(a,n-1);
    }
}

int main(){
    int a,n;
    printf("Enter the number for which you want to find power=");
    scanf("%d", &a);
    printf("Enter the power= ");
    scanf("%d",&n);
    
    int P=Power(a,n);

    printf("The result of %d to be power of %d is= %d", a, n,P);


    return 0;
}