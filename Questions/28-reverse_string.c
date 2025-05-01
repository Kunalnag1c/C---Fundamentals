    //Reverse a string without using built-in functions.
    
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i;
    printf("Enter the string= ");
    gets(str);
    int length=strlen(str);
    
    for(i=0;i<length/2;i++)
    {
        char tmp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=tmp;

    }
    printf("\nreversed string is= %s",str);
    
    return 0;
}