#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[20];
    float per;
};
struct student s1,s2;  //global variable

// can create variable both as global & local variable as per req.

int main(){
    // struct student s1,s2;   //local variable
    s1.roll=01;
    // s1.name="kunal";     // This is not allowed in C and causes a compilation error     //go down of the page to see more....
    strcpy(s1.name, "kunal");   // This works because strcpy handles copying character by character.
    s1.per=94.3;

    printf("Roll no: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Percentage: %f\n", s1.per);

    printf("\n");

    s2.roll=02;
    strcpy(s2.name, "Raj");
    s2.per=67.5;

    printf("Roll no: %d\nName: %s\nPercentage: %.2f", s2.roll,s2.name,s2.per);



    return 0;
}






/*
string value assignation

You can directly assign a string only at the time of declaration:

char str[] = "Hello"; // Allowed because it's initialization, not assignment.

This works because the compiler automatically allocates the memory and initializes the 
array with the string.

*/