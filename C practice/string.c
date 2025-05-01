#include<stdio.h>

int main(){
    
    char name[100];
    char name2[100];

    printf("NO whitespaces allowed\n\n");

    printf("Enter a name:");
    scanf("%s",&name);  //no white spaces takes . reads a singel word (stops at space)
    printf("%s\n",name);

    return 0;
}