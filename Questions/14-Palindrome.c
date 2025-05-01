    // Check if a number is a palindrome.

/* 
Palindrome Number = A palindrome number is a number that reads the same backward as forward.
In other words, it remains unchanged when its digits are reversed.
example =>  12321==12321  ,  
            8978798==8978798     
            -> LHS=RHS    
*/

#include <stdio.h>

int main()
{
    int num, rem, rev = 0,  originalNum ;
    printf("Enter original Number= ");
    scanf("%d", &num);

        originalNum = num; // Store the original number
    

    while (num != 0)
    // for(;num!=0;)
    {
        rem = num % 10;       // Get the last digit
        rev = rev * 10 + rem; // Add it to the reversed number
        num = num / 10;       // Remove the last digit
    }
    printf("Reverse Number is= %d\n", rev);

    //checking PALINDROME
    if(originalNum ==rev){
        printf("The number %d is Palindrome",num);
    }
    else{
         printf("The number %d is Not Palindrome",num);
    }

    return 0;
}