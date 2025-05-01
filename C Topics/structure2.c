#include<stdio.h>

struct Employee{
    int id;
    char name[20];
    float salary;
}emp1,emp2,emp3;    //also declare here as a global variable

int main(){
    struct Employee emp1={01,"Kunal",80000.75}; // Initialize structure members directly

    printf("Emp_ID: %d\nName: %s\nSalary: %.2f", emp1.id,emp1.name,emp1.salary);


    struct Employee emp2={.id=02, .name="Raj", .salary=66000.50};  // Use designated initializers

    printf("\nEmp_ID: %d\nName: %s\nSalary: %.2f", emp2.id,emp2.name,emp2.salary);


    return 0;
}

/*
    //Initialize structure values in multiple ways

->Use dot(.) operator to set individual members.
    struct Point p1; // Declare structure variable
    p1.x = 10;       // Assign values to members
    p1.y = 20;
    printf("Point: (%d, %d)\n", p1.x, p1.y);

->Use curly braces {} for direct initialization.
    struct Point p1 = {10, 20}; // Initialize structure members directly
    printf("Point: (%d, %d)\n", p1.x, p1.y);

->Use designated initializers for clarity in large structures.
    struct Point p1 = {.x = 10, .y = 20}; // Use designated initializers
    printf("Point: (%d, %d)\n", p1.x, p1.y);

->Use arrays of structures to handle multiple instances.
    struct Point points[3] = {{1, 2}, {3, 4}, {5, 6}}; // Initialize array of structures

    for (int i = 0; i < 3; i++) {
        printf("Point %d: (%d, %d)\n", i + 1, points[i].x, points[i].y);
    }

->Structure copying is straightforward if the types match.
    struct Point p1 = {10, 20};
    struct Point p2;

    p2 = p1; // Copy all members of p1 to p2

    printf("Point p2: (%d, %d)\n", p2.x, p2.y);

*/