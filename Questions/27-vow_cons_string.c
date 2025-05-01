// Count vowels and consonants in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,vowels=0,consonant=0;
    printf("Enter the string= ");
    gets(str);
    // printf("The string is= ");
    // puts(str);

    int length = strlen(str);
    // printf("length =%d \n", length);

    for (i = 0; i < length; i++)
    {
        // for (int j = 0; j < 5; j++)
        // {
        //     if (str[i] == vow[j])
        //     {
        //         printf("%s is vowel", str[j]);
        //     }
        // }
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowels++;
        }
        else{
            consonant++;
        }
    }

    printf("No. of vowels are: %d \n",vowels);
    printf("No. of consonant are: %d",consonant);

    return 0;
}