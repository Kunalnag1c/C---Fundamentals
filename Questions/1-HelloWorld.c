/*
From Question 1 to 60 =  https://chatgpt.com/share/67482835-2a98-8009-841d-ba89a6e8eaad
*/

// Write a program to print "Hello, World!".

#include <stdio.h> //header file - standard input output

int main()
{ // main function



    printf("Hello, World! \n"); // printf function to print and \n uses for new line




    // int a=94;

    //  puts("Kunal Nagwanshi= %d",a);      //Invalid
    
    //  puts("Kunal Nagwanshi");            //Valid

    /*
     The error occurs because the puts function in C does not accept formatted strings like printf does.

     The puts function is designed to simply display a string followed by a newline (\n) automatically.
      It does not handle format specifiers like %d for integers.
      */

    return 0; // function return type
}