    //Swap two numbers using pointers.

#include<stdio.h>

void Swap(int *x,int *y){
    //by the use of pointer the value changes directluy appear on the real varible's value
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

int main(){
    int a,b;
    printf("Enter the value of a and b= \n");
    scanf("%d %d", &a, &b);

    int *pa=&a;
    int *pb=&b;

    // int tmp=*pa;
    // *pa=*pb;
    // *pb=tmp;

    Swap(&a, &b);   //function calling

    printf("The values of a is %d and b is %d after swapping", a, b);

    return 0;
}