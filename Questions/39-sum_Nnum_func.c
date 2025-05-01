        // Write a function to calculate the sum of the first n natural numbers.

#include<stdio.h>

void sum(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("The sum is %d",sum);
}
int main(){
    int n;
    printf("Enter the largest natural number= ");
    scanf("%d", &n);

    sum(n);

    return 0;
}
