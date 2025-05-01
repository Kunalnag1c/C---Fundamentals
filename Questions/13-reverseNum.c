//// Reverse a given number.

#include <stdio.h>

int main()
{
    int num, rem, rev=0;
    printf("Enter Number= ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem=num%10;           // Get the last digit
        rev=rev*10+rem;     // Add it to the reversed number
        num=num/10;             // Remove the last digit
    }
    printf("Reverse Number is= %d", rev);
    return 0;
}



/*

when a= 120   and reverse= 21  occurs  the reason is-

 Jab hum kisi number ko reverse karte hain, toh agar uske starting (left side) mein zero aaye, 
toh programming mein usse automatically ignore kar diya jaata hai. Yeh isliye hota hai kyunki 
integer type numbers (jaise int, long long int) leading zero ko store nahi karte.

*/

