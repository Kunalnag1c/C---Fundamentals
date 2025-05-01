    //Check if a string is a palindrome.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],revstr[100];
    int palindrome=1;

    printf("Enter a string= ");
    gets(str);

    int length=strlen(str);
     // printf("%d",length);
    
    for(int i=0;i<length;i++){
        revstr[i]=str[length-i-1];  //reverse string logic that is reversed by help of indexes
    }
    revstr[length]='\0';

    // printf("\n");
    // puts(revstr);


    for(int i=0;i<length;i++)
    {
        if(revstr[i]!=str[i])
        {
            palindrome=0;
        }
    }
    if(palindrome)
    {
        printf("The entered string is palindrome");
    }
    else
    {
        printf("NOO palindrome");
    }

    return 0;
}