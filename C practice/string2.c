#include<stdio.h>

int main(){
     char name2[100];

     printf("When whitespaces allowed\n\n");

    printf("Enter name2:");
    gets(name2);        //input  .. allowed whitespaces and read whole string
    printf("\n");  // Print a new line explicitly
    puts(name2);   // Output the string
    


    return 0;
}