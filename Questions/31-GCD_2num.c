    //Write a function to find the GCD of two numbers.

#include<stdio.h>


int GCD(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b,A,B;
    printf("Enter two numbers=\n");
    scanf("%d %d",&a, &b);

    int gcd=GCD(a,b);

    printf("GCD of %d and %d is= %d", a, b, gcd);

    // printf("Prime factors of %d is= ",a);
    // for(int i=1;i<=a;i++){
    //     if(a%i==0){
    //        A=printf("%d ",i);
    //     }
    // }
    // printf("%d",A);

    // printf("\nPrime factors of %d is= ",b);
    // for(int i=1;i<=b;i++){
    //     if(b%i==0){
    //         B=printf("%d ",i);
    //     }
    // }
    // printf("%d",B);

    // for(int i=0;i<a;i++)
    // {
    // if(A==B){
    //     printf("\n%d",A);
    // }
    // }
    return 0;
}