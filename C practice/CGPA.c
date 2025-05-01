#include<stdio.h>

int main()
{   
    int n;
    float sum=0;
    float a[20];

    printf("\tCGPA Calculator\n");

    printf("Enter how many Semesters you have completed=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter the SGPA of %d Sem=",i);
        scanf("%f",&a[i]);
        sum+=a[i];
    }

    printf("The overall CGPA till now is= %.2f",sum/n);


    return 0;
}

