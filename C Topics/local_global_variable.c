#include<stdio.h>

int a=20;   //global variable

int fun(){
    printf("\n a is %d",a);
    return 0;
}

int fun1(int a){
    printf("\n a= %d",a);
    return 0;
}

int main(){
    // int a=10;   //local variable

    printf("\n a=%d",a);

    fun();

    fun1(5);

    return 0;
}


/*
Local=  The lifecycle of local variable is inside that loop/scope only.
Global= The lifecycle of global variable is to whole of the program.

->If local and global variable both exists in the program then priorty gives to the global variable oon the loop/scope.
->The global variable can be accesed in any of the functions either it is main() or other user defined functions.
->The parameter in any of the functions is treated/acted as a local variable.
*/