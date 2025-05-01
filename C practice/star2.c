#include<stdio.h>

void right_straight(int rows)
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


void right_reverse(int rows)
{
    for(int i=0;i>=rows;i++)
    {
        for(int j=0;j<=rows;j++)
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

    right_straight(rows);
    printf("\n");
    right_reverse(rows);
    

    return 0;
}