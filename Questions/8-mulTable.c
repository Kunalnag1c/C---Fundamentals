    //Print the multiplication table for a given number.

#include<stdio.h>

int main(){
    int n,table=0;
    printf("Enter the value of which table you want= ");
    scanf("%d", &n);

    //Table is
    for(int i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d * %d = %d \n", n,i,table);
    }

    return 0;
}