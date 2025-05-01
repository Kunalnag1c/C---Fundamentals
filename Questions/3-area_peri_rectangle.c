    //Find the area and perimeter of a rectangle.

#include<stdio.h>

int main(){
    int l,b,area,peri;
    printf("Enter length and breadth of rectangle= \n");
    scanf("%d %d", &l, &b);
    area=l*b;
    peri= 2*(l+b);
    printf("Area of rectangle is= %d \n and \nperimeter of rectangle is= %d",area,peri);
    return 0;
}