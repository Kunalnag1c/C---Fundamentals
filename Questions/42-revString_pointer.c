// Reverse a string using pointers

#include <stdio.h>
#include <string.h>

void reverse(char *ps,int length){

    for(int i=length-1;i>=0;i--){
        printf("%c",*(ps+i));
    }
   

}

int main()
{
    char str[100];
    printf("Enter a string= ");
    gets(str);
    int length=strlen(str);

    reverse(str, length);


    return 0;
}




/*



#include <stdio.h>
#include <string.h>

// Function to reverse the string in place
void reverseInPlace(char *ps, int length) {
    char *start = ps;
    char *end = ps + length - 1;

    while (start < end) {
        // Swap the characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    int length = strlen(str);

    reverseInPlace(str, length);

    printf("Reversed string: %s\n", str);

    return 0;
}


*/