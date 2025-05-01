#include<stdio.h>

void square( int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


void straight_traingle(int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


void reverse_traingle( int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=rows-1;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int rows;
    printf("Enter the number of rows you want to print:");
    scanf("%d",&rows);   

    square(rows);
    printf("\n");

    straight_traingle(rows);
    printf("\n");
    
    reverse_traingle(rows);

    return 0;
}