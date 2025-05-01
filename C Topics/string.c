#include<stdio.h>

int main()
{
    char string[6]={'k','u','n','a','l','\0'};
    printf("%s",string);
    
    char string1[6]="Kunal";   // size of array >= size of string
    printf("\n%s",string1);

    char string2[]="Kunal";
    printf("\n%s",string2);

   
    return 0;
}