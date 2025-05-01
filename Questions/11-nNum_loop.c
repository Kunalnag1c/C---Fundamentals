    //Print the first n natural numbers.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number limit you want to print: ");
    scanf("%d", &n);

    printf("First %d natural number are= ", n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }

    return 0;
}