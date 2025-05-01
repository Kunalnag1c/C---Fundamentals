#include<stdio.h>
#include<string.h>  //header file for string function usage

int main(){
    
    char s1[]="kunal";
    char s2[]="Nagwanshi";

    char s3[50];
    int x;

    //concatination
    // printf("%s\n", strcat(s1,s2));

    //length
    // printf("%d\n",strlen(s2));

    //reverse
    // puts(strrev(s1));

    // copy
    // strcpy(s3,s1);
    // puts(s3);

    //compare
    x= strcmp ( s1, s2 ) ;  /* It compares the strings character by character in lexicographical order (dictionary order),
     and its return value indicates the relationship between the two strings */
    printf ("\n%d", x) ;

    return 0;
}



/*
Lexicographical order is the dictionary order in which words or strings are arranged. 
In programming, it refers to the comparison of strings based on the alphabetical order of their characters,
  one character at a time.
*/