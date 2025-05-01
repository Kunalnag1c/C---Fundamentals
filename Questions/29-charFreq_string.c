    //Find the frequency of characters in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,count=0;
    printf("Enter the string= ");
    gets(str);
    int length=strlen(str);

    for(i=0;i<length/2;i++)
    {
        for(int j=1;j<length;j++){
            if(str[i]==str[j]){
                printf("Character %c comes %d times",str[i],count++);
            }
        }
        
    }

    return 0;
}