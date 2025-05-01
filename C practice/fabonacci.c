#include<stdio.h>

int fabonacci(int n);

int fabonacci(int n){
    if(n==0){
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    else{
       
        return (fabonacci(n-1)+fabonacci(n-2));
    }
}


int main(){
    int n;
    scanf("%d",&n);
    printf("The Fabonacci series up to position %d is: ", n);

    for(int i = 0; i <= n; i++) {
        printf("%d ", fabonacci(i)); 
    }
    printf("\n");

    return 0;
}