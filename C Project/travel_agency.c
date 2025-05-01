#include <stdio.h>

struct travel
{
    char name[20], licenceNo[20], route[20];
    int kms;
} drivers[3]; // Declare an array of structs for 3 drivers

int main()
{
    // struct travel s1,s2,s3;
    // printf("Enter Name:");
    // gets(s1.name);
    // printf("Enter Licence No.:");
    // gets(s1.licenceNo);
    // printf("Enter Route:");
    // gets(s1.route);
    // printf("Enter KMs:");
    // scanf("%d", &s1.kms);

    // printf("\nThe Details of Driver-1 is=\n");
    // printf("1.Name= %s\n2.Licence No.= %s\n3.Route= %s\n4.KMs= %d",s1.name,s1.licenceNo,s1.route,s1.kms);

    // Input loop for all 3 drivers
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Driver-%d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %s", drivers[i].name);
        printf("Enter Licence No.: ");
        scanf(" %s", drivers[i].licenceNo);
        printf("Enter Route: ");
        scanf(" %s", drivers[i].route);
        printf("Enter KMs: ");
        scanf("%d", &drivers[i].kms);
    }

    printf("\nDetails of Drivers:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nDriver-%d:\n", i + 1);
        printf("1. Name = %s\n", drivers[i].name);
        printf("2. Licence No. = %s\n", drivers[i].licenceNo);
        printf("3. Route = %s\n", drivers[i].route);
        printf("4. KMs = %d\n", drivers[i].kms);
    }

    return 0;
}