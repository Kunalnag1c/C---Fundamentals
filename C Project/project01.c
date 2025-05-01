/*We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.

When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.

Hint: Use loop & use a random number generator.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, count = 1;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number
    int randomNumber = (rand()%10)+1;     //we can also set limit which you want to..   Here the limit is less than 10

    // Print the random number
    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("\nEnter a number less than 10=");
        scanf("%d", &num);

        if (num < randomNumber)
            printf("\nEnter a higher number");
        else if (num > randomNumber)
            printf("\nEnter a lower number");
        else
        {
            printf("\nCongrats.. You won");
            break;
        }
        count++;

    } while (num != randomNumber);

    printf("\n\tYou won in %d attempts", count);
    
    return 0;
}
