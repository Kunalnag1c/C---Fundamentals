#include <stdio.h>
#include <string.h>

// Recursive function to reverse a string
void revString(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: if start crosses or equals end
    }

    // Swap the characters at start and end
    char tmp = str[start];
    str[start] = str[end];
    str[end] = tmp;

    // Recursive call for the next positions
    revString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets, if any
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("Original string: %s\n", str);

    // Call the recursive function
    revString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
