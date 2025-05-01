    //Check if a number is an Armstrong number.


    /*
    An Armstrong number (also known as a narcissistic number) is a number where 
    the sum of its digits raised to the power of the number of digits equals the number itself.
    example= 153->   1^3 + 5^3 + 3^3 == 153 
    */

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits (n)
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
