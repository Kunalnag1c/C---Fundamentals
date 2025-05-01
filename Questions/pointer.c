#include <stdio.h>

int main() {
    int a = 10;       // Declare an integer variable
    int *p = &a;      // Pointer p stores the address of a

    printf("Address of a: %p\n", &a);  // Print address of a
    printf("Address stored in p: %p\n", p); // Print address stored in p
    printf("Value of a: %d\n", a);    // Print value of a
    printf("Value at address p: %d\n", *p); // Dereference pointer to get value of a

    return 0;
}
