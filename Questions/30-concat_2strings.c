// Concatenate two strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str1[50], str2[50];
    printf("Enter String= ");
    gets(str1);
    int length1 = strlen(str1);

    printf("Enter String2= ");
    gets(str2);
    int length2 = strlen(str2);

    char str3[length1 + length2 + 1];   //third string

    for (i = 0; i < length1; i++)
    {
        str3[i] = str1[i];  //assign str1 into str3
    }
    
    for (j = 0; j < length2; j++)
    {
        str3[i + j] = str2[j];      //assign str2 into str3 after end index of str1
    }

    // Add the null terminator at the end of the concatenated string
    str3[length1 + length2] = '\0';

    printf("Concatinated String is= %s", str3);

    return 0;
}