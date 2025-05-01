#include<stdio.h>

int fabonacci(int n);

int fabonacci(int n){
    if(n==0){             //base case
        return 0;//stop recursion
    }

    else if (n==1)       //base case
    {
        return 1; //stop recursion
    }
    
    else{
                                            //recursive case
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