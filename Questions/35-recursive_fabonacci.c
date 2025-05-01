        //Write a recursive function to generate the Fibonacci sequence.

#include<stdio.h>

int fabonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else{
        return fabonacci(n-2)+fabonacci(n-1);
    }
}

int main(){
    int n;
    printf("Enter the quantity of numbers you want = ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("%d ", fabonacci(i));
    }
    // printf("Fabonacci Series is = %d", fabonacci(n));

    
    return 0;
}