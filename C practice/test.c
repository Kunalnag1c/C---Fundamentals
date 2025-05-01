#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Array for number names
    char arr[10][10] = {"one", "two", "three", "four", "five", 
                        "six", "seven", "eight", "nine"};

    // Loop through the range from a to b
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // If the number is between 1 and 9, print its name
            printf("%s\n", arr[i - 1]);
        } else {
            // For numbers greater than 9, check if even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
