#include <stdio.h>

// Without argument & without return type

void sum()
{
    int a = 10, b = 23;
    int sum = a + b;
    printf("Ans from without arg & without return value: %d", sum);
}

// without argument & with return type

int sum1()
{
    int a = 60, b = 44;
    int sum = a + b;

    return sum;
}

// with argument & without return type

void sum2(int a, int b)//make copy of x,y
{
    printf("\nAns from with arg & without return value: %d", a + b);
}

// with argument & with return type

int sum3(int a, int b)//make copy of x,y
{
    int sum = a + b;

    return sum;
}



//Main function

int main()
{
    int x=34,y=12;

    //function callings

    sum();

    printf("\nAns from without arg & with return value: %d", sum1());

    sum2(x, y);   //giving value of x and y to sum2 function

    printf("\nAns from without arg & with return value: %d", sum3(x, y));  //giving value of x and y to sum2 function

    return 0;
}




//We can use any of the above way to define a function accordiing to the requirement.