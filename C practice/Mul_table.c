#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number whose table you want=");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        sum+=(n*i);
    }
    printf("\nThe sum of all resultant of this table is= %d",sum);
    return 0;
}