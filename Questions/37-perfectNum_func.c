        // Create a function to check if a number is a perfect number.

#include<stdio.h>

void perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            printf("%d ",i);
            sum+=i;
        }
    }
    if(sum==a){
        printf("\nPerfect");
    }
    else
    printf("\nnot");

}

int main(){
    int a;
    printf("Enter the number= ");
    scanf("%d", &a);

    perfect(a);

    return 0;
}