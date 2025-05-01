#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number:");
    scanf("%d",&a);

//switch runs only for int and char datatype

    switch(a)
    {
        case 1:
        printf("ONE\n");
        break;               // break; statement

        case 2:
        printf("TWO\n");
        break;               //without break the next case will also executed

        case 3:
        printf("THREE\n");
        break;

        case 4:
        printf("FOUR\n");
        break;

        case 5:
        printf("FIVE\n");
        
        default:               //if no any case run then default will be executed
        printf("ERROR");
    }

    return 0;
}