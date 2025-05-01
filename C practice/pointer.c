#include<stdio.h>

int main() {
    int a, *ptr; // Declare an integer and a pointer to an integer
    a = 5;       // Assign 5 to the variable `a`
    ptr = &a;    // Initialize `ptr` to the address of `a`

    printf("Value of a: %d\n", a);          // Print the value of `a`
    printf("Address of a: %p\n", (void*)&a); // Print the address of `a` (use %p for pointers)
    printf("Value of ptr: %p\n", (void*)ptr); // Print the value of `ptr` (address it points to)
    printf("Address of ptr: %p\n", (void*)&ptr); // Print the address of `ptr`
    printf("Value pointed by ptr: %d\n", *ptr);  // Dereference `ptr` to get the value of `a`

    return 0;
}
