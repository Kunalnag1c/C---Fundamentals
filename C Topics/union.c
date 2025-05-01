#include<stdio.h>
#include<string.h>

union student{
    int roll;
    char name[20];
    float per;

}s1,s2;

int main(){
    s1.roll=01;
    strcpy(s1.name, "Kunal");
    s1.per=94.3;

    // union student s1={01,"kunal",93.4}; //shows error      // excess elements in union initializer

    printf("Roll No: %d\nName: %s\nPercentage: %f",s1.roll,s1.name,s1.per);
    //only print the last one ...since unnion shares same memory space

    return 0;
}

/*
A union in C is a data structure where all members share the same memory space. 
This means that at any given time,
 only one member of the union can hold a value, and storing a new value overwrites the previous one.

Why This Happens-
In a union, all members share the same memory space. Only the last assigned value is valid.
Accessing other members that were previously assigned but overwritten results in undefined behavior.
*/