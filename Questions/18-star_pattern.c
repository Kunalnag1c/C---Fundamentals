        //Print a pattern of star in staright left sided traingle

#include<stdio.h>

int main(){
    int m;
    printf("Enter the rows you want to print= ");
    scanf("%d",&m);

    printf("Left sided straight Traingke is-\n");

    for(int i=0;i<m;i++)
    {   
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
~~~~~~~~~~when both rows and column are different ~~~~~~~~~~~~~~~~~

            *
            **
            ***
            ****
            ****
            ****

#include <stdio.h>

int main() {
    int rows, columns;

    // Input for rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the maximum width (number of columns): ");
    scanf("%d", &columns);

    // Print the triangular star pattern
    for (int i = 1; i <= rows; i++) {
        // Ensure the pattern respects the column limit
        int stars = (i < columns) ? i : columns;
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/