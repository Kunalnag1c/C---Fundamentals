// Print all prime numbers between two given numbers.,

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i < 2)
        {
            continue;
        }

        int isPrime = 1; // Assume the number is prime

        // Check if the number is divisible by any number from 2 to sqrt(i)
        for (int j = 2; j * j <= i; j++)  // Optimize by checking up to sqrt(i)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime)
        {
            printf("%d  ", i);
        }
    }

    return 0;
}


/*

If a number N can be divided by any number greater than its square root, 
the corresponding factor must be smaller than the square root.
 This means that checking numbers greater than the square root is unnecessary.



Also,Let's see the loop conditions step by step:
example i=29

j = 2:
        2 * 2 = 4 <= 29 is true, so we continue the loop.
j = 3:
        3 * 3 = 9 <= 29 is true, so we continue.
j = 4:
        4 * 4 = 16 <= 29 is true, so we continue.
j = 5:
        5 * 5 = 25 <= 29 is true, so we continue.
j = 6:
        6 * 6 = 36 <= 29 is false, so the loop stops.
*/